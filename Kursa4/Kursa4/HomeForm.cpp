#include "HomeForm.h"

inline System::Void Kursa4::HomeForm::HomeForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	if (role != Constants().ADMIN_ROLE)
	{
		AddButton->Hide();
	}
}

inline System::Void Kursa4::HomeForm::filmsListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	Film^ film = (Film^)filmsListBox->SelectedItem;

	FilmForm^ filmForm = gcnew FilmForm(film);
	filmForm->Show();
	this->Hide();
}

inline System::Void Kursa4::HomeForm::AddButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	AddFilmForm^ addFilmForm = gcnew AddFilmForm();
	addFilmForm->ShowDialog();
}
