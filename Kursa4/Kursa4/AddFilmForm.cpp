#include "AddFilmForm.h"
#include "HomeForm.h"

inline System::Void Kursa4::AddFilmForm::SaveButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Film^ editedFilm = gcnew Film();

#pragma region FilmBoxesCheck
	if (filmName->Text == "" || filmName->Text == nullptr)
	{
		filmName->BackColor = System::Drawing::Color::Tomato;
		return;
	}
	else
	{
		filmName->BackColor = System::Drawing::Color::DarkSeaGreen;
		editedFilm->name = filmName->Text;
	}

	if (Genre->Text == "" || Genre->Text == nullptr)
	{
		Genre->BackColor = System::Drawing::Color::Tomato;
		return;
	}
	else
	{
		Genre->BackColor = System::Drawing::Color::DarkSeaGreen;
		editedFilm->genre = Genre->Text;
	}


	if (Director->Text == "" || Director->Text == nullptr)
	{
		Director->BackColor = System::Drawing::Color::Tomato;
		return;
	}
	else
	{
		Director->BackColor = System::Drawing::Color::DarkSeaGreen;
		editedFilm->director = Director->Text;
	}


	if (mainRole->Text == "" || mainRole->Text == nullptr)
	{
		mainRole->BackColor = System::Drawing::Color::Tomato;
		return;
	}
	else
	{
		mainRole->BackColor = System::Drawing::Color::DarkSeaGreen;
		editedFilm->mainRole = mainRole->Text;
	}

	editedFilm->watches = 0;
#pragma endregion

	if (isEditing)
	{	
		FilmsList().EditFilm(film->name, editedFilm);
		MessageBox::Show(this, "Фильм отредактирован!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		
		FilmForm^ ff = gcnew FilmForm(editedFilm, Constants().ADMIN_ROLE);
		ff->Show();
		this->Close();
	}
	else
	{
		editedFilm->AddInFile(Constants().FILMS_FILE, true);
		FilmsList().GetFilmsList()->Add(editedFilm);
		MessageBox::Show(this, "Фильм добавлен!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

		HomeForm^ home = gcnew HomeForm(Constants().ADMIN_ROLE);
		home->Show();
		this->Close();
	}
}

inline System::Void Kursa4::AddFilmForm::CloseButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	HomeForm^ home = gcnew HomeForm(Constants().ADMIN_ROLE);
	home->Show();
	this->Close();
}
