#include "FilmForm.h"
#include "HomeForm.h"

inline System::Void Kursa4::FilmForm::FilmForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	SetFilmParameters();

	if (role != Constants().ADMIN_ROLE)
	{
		editButton->Hide();
	}
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
	Watches->Text = (++film->watches).ToString();
	FilmsList().EditElement(film->name ,film);

	MessageBox::Show(this, "Спасибо за просмотр!", "Ура", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

	watchButton->Enabled = false;
	watchButton->BackColor = System::Drawing::Color::DarkGray;
}

inline System::Void Kursa4::FilmForm::BackLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	HomeForm^ home = gcnew HomeForm(role);
	home->Show();
	this->Close();
}

inline System::Void Kursa4::FilmForm::editButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	AddFilmForm^ addFilmForm = gcnew AddFilmForm(film);
	addFilmForm->Show();
	this->Close();
}
