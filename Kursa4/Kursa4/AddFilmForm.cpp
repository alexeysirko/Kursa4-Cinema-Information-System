#include "AddFilmForm.h"

inline System::Void Kursa4::AddFilmForm::AddFilmForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	prevForm = Application::OpenForms->Count - 2;
}

inline System::Void Kursa4::AddFilmForm::SaveButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Film^ film = gcnew Film();

	if (filmName->Text == "" || filmName->Text == nullptr)
	{
		filmName->BackColor = System::Drawing::Color::Tomato;
		return;
	}
	else
	{
		filmName->BackColor = System::Drawing::Color::DarkSeaGreen;
		film->name = filmName->Text;
	}

	if (Genre->Text == "" || Genre->Text == nullptr)
	{
		Genre->BackColor = System::Drawing::Color::Tomato;
		return;
	}
	else
	{
		Genre->BackColor = System::Drawing::Color::DarkSeaGreen;
		film->genre = Genre->Text;
	}


	if (Director->Text == "" || Director->Text == nullptr)
	{
		Director->BackColor = System::Drawing::Color::Tomato;
		return;
	}
	else
	{
		Director->BackColor = System::Drawing::Color::DarkSeaGreen;
		film->director = Director->Text;
	}


	if (mainRole->Text == "" || mainRole->Text == nullptr)
	{
		mainRole->BackColor = System::Drawing::Color::Tomato;
		return;
	}
	else
	{
		mainRole->BackColor = System::Drawing::Color::DarkSeaGreen;
		film->mainRole = mainRole->Text;
	}

	film->watches = 0;

	film->AddInFile(Constants().FILMS_FILE);
	FilmsList().GetFilmsList()->Add(film);
	MessageBox::Show(this, "Фильм добавлен!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

	//TODO Refresh list
	//Application::OpenForms[prevForm]->ResetBindings();
	this->Close();
}

inline System::Void Kursa4::AddFilmForm::CloseButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::OpenForms[prevForm]->Show();
	this->Close();
}
