#include "FilmForm.h"

inline System::Void Kursa4::FilmForm::FilmForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	SetFilmParameters();
}

inline void Kursa4::FilmForm::SetFilmParameters()
{
	FilmName->Text = film->name;
	Genre->Text = film->genre;
	Director->Text = film->director;
	MainRole->Text = film->mainRole;
	Watches->Text = film->watches.ToString();
}

inline System::Void Kursa4::FilmForm::WatchButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	film->watches++;
	Watches->Text = film->watches.ToString();
	FilmsList().FindFilm(film->name)->watches = film->watches;

	MessageBox::Show(this, "Спасибо за просмотр!", "Ура", MessageBoxButtons::OK, MessageBoxIcon::Hand);

	watchButton->Enabled = false;
	watchButton->BackColor = System::Drawing::Color::DarkGray;
}

inline System::Void Kursa4::FilmForm::BackLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{

}
