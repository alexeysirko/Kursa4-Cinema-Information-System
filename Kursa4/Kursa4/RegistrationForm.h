#pragma once
#include "FilesManager.h"

namespace Kursa4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegistrationFormmmmm!
	/// </summary>
	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	public:
		RegistrationForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ repeatPasswordTextBox;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ registrationButton;
	private: System::Windows::Forms::LinkLabel^ haveAnAccountLink;
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	private: System::Windows::Forms::TextBox^ loginTextBox;
	private: System::Windows::Forms::Label^ PasswordLabel;
	private: System::Windows::Forms::Label^ LoginLabel;
	private: System::Windows::Forms::Label^ RegLabel;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->repeatPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->registrationButton = (gcnew System::Windows::Forms::Button());
			this->haveAnAccountLink = (gcnew System::Windows::Forms::LinkLabel());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordLabel = (gcnew System::Windows::Forms::Label());
			this->LoginLabel = (gcnew System::Windows::Forms::Label());
			this->RegLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// repeatPasswordTextBox
			// 
			this->repeatPasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->repeatPasswordTextBox->Location = System::Drawing::Point(238, 226);
			this->repeatPasswordTextBox->Name = L"repeatPasswordTextBox";
			this->repeatPasswordTextBox->Size = System::Drawing::Size(367, 31);
			this->repeatPasswordTextBox->TabIndex = 26;
			this->repeatPasswordTextBox->UseWaitCursor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(51, 226);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 25);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Задайте Пароль:";
			this->label1->UseWaitCursor = true;
			// 
			// registrationButton
			// 
			this->registrationButton->BackColor = System::Drawing::Color::Green;
			this->registrationButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->registrationButton->Location = System::Drawing::Point(290, 299);
			this->registrationButton->Name = L"registrationButton";
			this->registrationButton->Size = System::Drawing::Size(281, 53);
			this->registrationButton->TabIndex = 24;
			this->registrationButton->Text = L"Зарегестрироваться";
			this->registrationButton->UseVisualStyleBackColor = false;
			this->registrationButton->UseWaitCursor = true;
			this->registrationButton->Click += gcnew System::EventHandler(this, &RegistrationForm::registrationButton_Click);
			// 
			// haveAnAccountLink
			// 
			this->haveAnAccountLink->AutoSize = true;
			this->haveAnAccountLink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->haveAnAccountLink->Location = System::Drawing::Point(329, 382);
			this->haveAnAccountLink->Name = L"haveAnAccountLink";
			this->haveAnAccountLink->Size = System::Drawing::Size(201, 20);
			this->haveAnAccountLink->TabIndex = 23;
			this->haveAnAccountLink->TabStop = true;
			this->haveAnAccountLink->Text = L"Уже есть аккаунт\? Войти";
			this->haveAnAccountLink->UseWaitCursor = true;
			this->haveAnAccountLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegistrationForm::haveAnAccountLink_LinkClicked);
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->passwordTextBox->Location = System::Drawing::Point(238, 168);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(367, 31);
			this->passwordTextBox->TabIndex = 22;
			this->passwordTextBox->UseWaitCursor = true;
			// 
			// loginTextBox
			// 
			this->loginTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->loginTextBox->Location = System::Drawing::Point(238, 104);
			this->loginTextBox->Name = L"loginTextBox";
			this->loginTextBox->Size = System::Drawing::Size(367, 31);
			this->loginTextBox->TabIndex = 21;
			this->loginTextBox->UseWaitCursor = true;
			// 
			// PasswordLabel
			// 
			this->PasswordLabel->AutoSize = true;
			this->PasswordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PasswordLabel->Location = System::Drawing::Point(51, 168);
			this->PasswordLabel->Name = L"PasswordLabel";
			this->PasswordLabel->Size = System::Drawing::Size(181, 25);
			this->PasswordLabel->TabIndex = 20;
			this->PasswordLabel->Text = L"Задайте Пароль:";
			this->PasswordLabel->UseWaitCursor = true;
			// 
			// LoginLabel
			// 
			this->LoginLabel->AutoSize = true;
			this->LoginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LoginLabel->Location = System::Drawing::Point(66, 110);
			this->LoginLabel->Name = L"LoginLabel";
			this->LoginLabel->Size = System::Drawing::Size(166, 25);
			this->LoginLabel->TabIndex = 19;
			this->LoginLabel->Text = L"Задайте Логин:";
			this->LoginLabel->UseWaitCursor = true;
			// 
			// RegLabel
			// 
			this->RegLabel->AutoSize = true;
			this->RegLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RegLabel->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->RegLabel->Location = System::Drawing::Point(340, 37);
			this->RegLabel->Name = L"RegLabel";
			this->RegLabel->Size = System::Drawing::Size(174, 31);
			this->RegLabel->TabIndex = 18;
			this->RegLabel->Text = L"Регистрация";
			this->RegLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->RegLabel->UseWaitCursor = true;
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(811, 457);
			this->Controls->Add(this->repeatPasswordTextBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->registrationButton);
			this->Controls->Add(this->haveAnAccountLink);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->loginTextBox);
			this->Controls->Add(this->PasswordLabel);
			this->Controls->Add(this->LoginLabel);
			this->Controls->Add(this->RegLabel);
			this->Name = L"RegistrationForm";
			this->Text = L"RegistrationForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void haveAnAccountLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) 
	{				
		Application::Exit();
	}

	const int USER = 0;
	String^ ACCOUNTS_FILE = "AccountsData.txt";

	private: System::Void registrationButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ login = loginTextBox->Text;
		String^ password = passwordTextBox->Text;
		String^ repeatedPassword = repeatPasswordTextBox->Text;

		if (!IsLoginExist(login) 
			& IsPasswordCorrect(password) 
			& ArePasswordsEqual(password, repeatedPassword))
		{
			FilesManager().WriteInFile(ACCOUNTS_FILE, login + "\n" + password + "\n" + USER + "\n");
			MessageBox::Show(this, "Вы зарегестрированы!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}

private:
	bool IsLoginExist(String^ login)
	{
		if (login == "wow")
		{
			MessageBox::Show(this, "Этот логин занят!", "Введите другой логин", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return true;
		}

		return false;
		//TODO: get accounts from data file and compare logins
		/*for (int i = 0; i < amountOfAccounts; i++)
		{
			if (login == account[i].login)
			{
				MessageBox::Show(this, "Этот логин занят!", "Введите другой логин", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
		}*/
	}

	bool IsPasswordCorrect(String^ password)
	{
		const int PASSWORD_MIN_LENGTH = 6;

		if (password->Length >= PASSWORD_MIN_LENGTH)
		{
			return true;
		}
		else
		{
			MessageBox::Show(this, "Слишком короткий пароль!", "Пароль должен быть >= 6 символов", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return false;
		}
	}

	bool ArePasswordsEqual(String^ str1, String^ str2)
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
};
}
