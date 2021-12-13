#include "HomeForm.h"

inline System::Void Kursa4::HomeForm::HomeForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	ShowFilmsList();

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
	List<Film^>^ films = FilmsList().GetFilmsList();

	filmsListBox->DataSource = films;
	filmsListBox->DisplayMember = "name";
	
	this->filmsListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &HomeForm::filmsListBox_SelectedIndexChanged);
	filmsListBox->BindingContext = this->BindingContext;
}
