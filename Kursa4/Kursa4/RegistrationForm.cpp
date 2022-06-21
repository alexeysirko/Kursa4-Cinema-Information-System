#include "RegistrationForm.h"

inline void Kursa4::RegistrationForm::RegForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	passwordTextBox->PasswordChar = '*';
	repeatPasswordTextBox->PasswordChar = '*';
}

inline System::Void Kursa4::RegistrationForm::haveAnAccountLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	Application::OpenForms[0]->Show();
	this->Close();
}

inline System::Void Kursa4::RegistrationForm::registrationButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	User^ user = gcnew User();
	user->login = loginTextBox->Text;
	user->password = passwordTextBox->Text->GetHashCode().ToString();
	user->role = Constants().USER_ROLE;
	String^ repeatedPassword = repeatPasswordTextBox->Text->GetHashCode().ToString();

	if (!User().IsLoginExist(user->login)
		& ArePasswordsEqual(user->password, repeatedPassword)
		& IsPasswordCorrect(user->password))
	{
		SetAdminIfUsersListIsEmpty(user);
		user->AddInFile(Constants().USERS_FILE, true);
		MessageBox::Show(this, "Вы зарегестрированы!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

		HomeForm^ homeForm = gcnew HomeForm(user->role);
		homeForm->Show();
		this->Hide();
	}
}

inline bool Kursa4::RegistrationForm::IsPasswordCorrect(String^ password)
{
	const int PASSWORD_MIN_LENGTH = 6;

	if (password->Length >= PASSWORD_MIN_LENGTH)
	{
		return true;
	}
	else
	{
		String^ passswordInf = "Пароль должен быть >= " + PASSWORD_MIN_LENGTH + " символов";
		MessageBox::Show(this, "Слишком короткий пароль!", passswordInf, MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return false;
	}
}

inline bool Kursa4::RegistrationForm::ArePasswordsEqual(String^ str1, String^ str2)
{
	if (str1 == str2)
	{
		return true;
	}
	else
	{
		MessageBox::Show(this, "Пароли не совпадают!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return false;
	}
}

inline void Kursa4::RegistrationForm::SetAdminIfUsersListIsEmpty(User^ user)
{
	List<User^>^ users = UsersList().Get();
	if (users == nullptr || users->Count == 0)
	{
		user->role = Constants().ADMIN_ROLE;
	}
}
