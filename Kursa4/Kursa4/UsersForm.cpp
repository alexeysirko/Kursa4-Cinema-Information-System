#include "UsersForm.h"

inline System::Void Kursa4::UsersForm::UsersForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	ShowAdmins();
	ShowUsers();
}

inline System::Void Kursa4::UsersForm::adminsListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (UsersList().GetAdmins()->Count <= 1)
	{
		MessageBox::Show(this, "Должен остаться хотя бы один администратор!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	User^ user = (User^)adminsListBox->SelectedItem;
	UsersList().EditElement(user->login, Constants().USER_ROLE);

	ShowAdmins();
	ShowUsers();
}

inline System::Void Kursa4::UsersForm::usersListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	User^ user = (User^)usersListBox->SelectedItem;
	UsersList().EditElement(user->login, Constants().ADMIN_ROLE);

	ShowAdmins();
	ShowUsers();
}

inline void Kursa4::UsersForm::ShowAdmins()
{
	this->adminsListBox->SelectedIndexChanged -= gcnew System::EventHandler(this, &UsersForm::adminsListBox_SelectedIndexChanged);
	this->Controls->Remove(adminsListBox);
	this->Controls->Add(adminsListBox);

	adminsListBox->DataSource = UsersList().GetAdmins();
	adminsListBox->DisplayMember = "login";

	this->adminsListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &UsersForm::adminsListBox_SelectedIndexChanged);
	adminsListBox->BindingContext = this->BindingContext;
}

inline void Kursa4::UsersForm::ShowUsers()
{
	this->usersListBox->SelectedIndexChanged -= gcnew System::EventHandler(this, &UsersForm::usersListBox_SelectedIndexChanged);
	this->Controls->Remove(usersListBox);
	this->Controls->Add(usersListBox);

	usersListBox->DataSource = UsersList().GetUsers();
	usersListBox->DisplayMember = "login";

	this->usersListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &UsersForm::usersListBox_SelectedIndexChanged);
	usersListBox->BindingContext = this->BindingContext;
}

inline System::Void Kursa4::UsersForm::goBack_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	this->Close();
}
