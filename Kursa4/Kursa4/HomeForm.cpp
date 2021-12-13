#include "HomeForm.h"
#include "Genres.h"

inline System::Void Kursa4::HomeForm::HomeForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	originalFilms = FilmsList().GetFilmsList();	

	horrorTextBox->Text = Genres().HORROR;
	fantasyCheckBox->Text = Genres().FANTASY;
	comedyCheckBox->Text = Genres().COMEDY;
	cartoonCheckBox->Text = Genres().CARTOON;
	dramaCheckBox->Text = Genres().DRAMA;
	CheckAll();

	if (role != Constants().ADMIN_ROLE)
	{
		AddButton->Hide();
	}
}

inline System::Void Kursa4::HomeForm::filmsListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	Film^ film = (Film^)filmsListBox->SelectedItem;

	FilmForm^ filmForm = gcnew FilmForm(film, role);
	filmForm->Show();
	this->Close();
}

inline System::Void Kursa4::HomeForm::AddButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	AddFilmForm^ addFilmForm = gcnew AddFilmForm();
	addFilmForm->ShowDialog();
	this->Close();
}

inline void Kursa4::HomeForm::ShowFilmsList()
{	
	this->filmsListBox->SelectedIndexChanged -= gcnew System::EventHandler(this, &HomeForm::filmsListBox_SelectedIndexChanged);
	this->Controls->Remove(filmsListBox);
	this->Controls->Add(filmsListBox);
	
	filmsListBox->DataSource = filteredFilms;
	filmsListBox->DisplayMember = "name";
	
	this->filmsListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &HomeForm::filmsListBox_SelectedIndexChanged);
	filmsListBox->BindingContext = this->BindingContext;
}

inline void Kursa4::HomeForm::CheckAll()
{
	horrorTextBox->Checked = true;
	fantasyCheckBox->Checked = true;
	cartoonCheckBox->Checked = true;
	dramaCheckBox->Checked = true;
	comedyCheckBox->Checked = true;
}

inline System::Void Kursa4::HomeForm::selectAllButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	CheckAll();
}

/// <param name="genresNames">Names of genres that will stay in originalFilms list</param>
inline void Kursa4::HomeForm::SetFilmsGenres()
{
	//Get full copy list of originalFilms
	filteredFilms = gcnew List<Film^>(originalFilms);

	//Check every film
	for (int i = 0; i < filteredFilms->Count; i++)
	{
		bool isFilmGenreOk = false;
		//Check if film genre is on genresNames
		for (int j = 0; j < genresNames->Count; j++)
		{
			if (genresNames[j] == filteredFilms[i]->genre)
			{
				//Setting true for marking that we don't need to delete it
				isFilmGenreOk = true;
				break;
			}
		}

		//After checking genreFilm deleting it from list if it hasn't needed genre
		if (!isFilmGenreOk)
		{
			filteredFilms->RemoveAt(i);
			//To check previous element of list
			i--;
		}
	}
}

inline System::Void Kursa4::HomeForm::comedyCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (comedyCheckBox->Checked)
	{
		genresNames->Add(Genres().COMEDY);
	}
	else
	{
		genresNames->Remove(Genres().COMEDY);
	}

	SetFilmsGenres();
	ShowFilmsList();
}

inline System::Void Kursa4::HomeForm::horrorTextBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (horrorTextBox->Checked)
	{
		genresNames->Add(Genres().HORROR);
	}
	else
	{
		genresNames->Remove(Genres().HORROR);
	}

	SetFilmsGenres();
	ShowFilmsList();
}

inline System::Void Kursa4::HomeForm::cartoonCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (cartoonCheckBox->Checked)
	{
		genresNames->Add(Genres().CARTOON);
	}
	else
	{
		genresNames->Remove(Genres().CARTOON);
	}

	SetFilmsGenres();
	ShowFilmsList();
}

inline System::Void Kursa4::HomeForm::dramaCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (dramaCheckBox->Checked)
	{
		genresNames->Add(Genres().DRAMA);
	}
	else
	{
		genresNames->Remove(Genres().DRAMA);
	}

	SetFilmsGenres();
	ShowFilmsList();
}

inline System::Void Kursa4::HomeForm::fantasyCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (fantasyCheckBox->Checked)
	{
		genresNames->Add(Genres().FANTASY);
	}
	else
	{
		genresNames->Remove(Genres().FANTASY);
	}

	SetFilmsGenres();
	ShowFilmsList();
}



