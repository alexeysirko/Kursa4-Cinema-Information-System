#include "AuthorisationForm.h"
#include <Windows.h>
using namespace Kursa4; // Название проекта

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew AuthorisationForm);
	return 0;
}

inline System::Void Kursa4::AuthorisationForm::AuthorisationForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	PasswordTextBox->PasswordChar = '*';
}

inline System::Void Kursa4::AuthorisationForm::NoAccount_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	RegistrationForm^ regForm = gcnew RegistrationForm();
	regForm->Show();
	AuthorisationForm::Hide();
}

inline System::Void Kursa4::AuthorisationForm::CloseButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

inline System::Void Kursa4::AuthorisationForm::EnterButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	User^ user = gcnew User();
	user->login = loginTextBox->Text;
	user->password = PasswordTextBox->Text->GetHashCode().ToString();
	int role = 0;

	if (user->AreLoginAndPasswordRight(role))
	{
		HomeForm^ homeForm = gcnew HomeForm(role);
		homeForm->Show();
		AuthorisationForm::Hide();
	}
	else
	{
		MessageBox::Show(this, "Вы ввели неверный логин или пароль!", "Попробуйте ещё раз", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
