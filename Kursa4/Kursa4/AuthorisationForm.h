#pragma once
#include <string>
#include "HomeForm.h"
#include "RegistrationForm.h"

namespace Kursa4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AuthorisationForm
	/// </summary>
	public ref class AuthorisationForm : public System::Windows::Forms::Form
	{
	public:
		AuthorisationForm(void)
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
		~AuthorisationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ AuthLabel;
	protected:

	private: System::Windows::Forms::Label^ LoginLabel;
	private: System::Windows::Forms::Label^ PasswordLabel;


	private: System::Windows::Forms::TextBox^ loginTextBox;
	private: System::Windows::Forms::TextBox^ PasswordTextBox;
	private: System::Windows::Forms::LinkLabel^ NoAccountLink;


	private: System::Windows::Forms::Button^ CloseButton;
	private: System::Windows::Forms::Button^ EntryButton;


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
			this->AuthLabel = (gcnew System::Windows::Forms::Label());
			this->LoginLabel = (gcnew System::Windows::Forms::Label());
			this->PasswordLabel = (gcnew System::Windows::Forms::Label());
			this->loginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NoAccountLink = (gcnew System::Windows::Forms::LinkLabel());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->EntryButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// AuthLabel
			// 
			this->AuthLabel->AutoSize = true;
			this->AuthLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AuthLabel->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->AuthLabel->Location = System::Drawing::Point(240, 26);
			this->AuthLabel->Name = L"AuthLabel";
			this->AuthLabel->Size = System::Drawing::Size(178, 31);
			this->AuthLabel->TabIndex = 0;
			this->AuthLabel->Text = L"Авторизация";
			this->AuthLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->AuthLabel->UseWaitCursor = true;
			// 
			// LoginLabel
			// 
			this->LoginLabel->AutoSize = true;
			this->LoginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LoginLabel->Location = System::Drawing::Point(74, 91);
			this->LoginLabel->Name = L"LoginLabel";
			this->LoginLabel->Size = System::Drawing::Size(77, 25);
			this->LoginLabel->TabIndex = 1;
			this->LoginLabel->Text = L"Логин:";
			this->LoginLabel->UseWaitCursor = true;
			// 
			// PasswordLabel
			// 
			this->PasswordLabel->AutoSize = true;
			this->PasswordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PasswordLabel->Location = System::Drawing::Point(59, 148);
			this->PasswordLabel->Name = L"PasswordLabel";
			this->PasswordLabel->Size = System::Drawing::Size(92, 25);
			this->PasswordLabel->TabIndex = 2;
			this->PasswordLabel->Text = L"Пароль:";
			this->PasswordLabel->UseWaitCursor = true;
			// 
			// loginTextBox
			// 
			this->loginTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->loginTextBox->Location = System::Drawing::Point(178, 88);
			this->loginTextBox->Name = L"loginTextBox";
			this->loginTextBox->Size = System::Drawing::Size(339, 31);
			this->loginTextBox->TabIndex = 3;
			this->loginTextBox->UseWaitCursor = true;
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->PasswordTextBox->Location = System::Drawing::Point(178, 145);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(339, 31);
			this->PasswordTextBox->TabIndex = 4;
			this->PasswordTextBox->UseWaitCursor = true;
			// 
			// NoAccountLink
			// 
			this->NoAccountLink->AutoSize = true;
			this->NoAccountLink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NoAccountLink->Location = System::Drawing::Point(213, 316);
			this->NoAccountLink->Name = L"NoAccountLink";
			this->NoAccountLink->Size = System::Drawing::Size(284, 20);
			this->NoAccountLink->TabIndex = 5;
			this->NoAccountLink->TabStop = true;
			this->NoAccountLink->Text = L"Нет аккаунта\? Зарегестрироваться";
			this->NoAccountLink->UseWaitCursor = true;
			this->NoAccountLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AuthorisationForm::NoAccount_LinkClicked);
			// 
			// CloseButton
			// 
			this->CloseButton->BackColor = System::Drawing::SystemColors::ControlDark;
			this->CloseButton->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonShadow;
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CloseButton->Location = System::Drawing::Point(178, 233);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(163, 53);
			this->CloseButton->TabIndex = 6;
			this->CloseButton->Text = L"Закрыть";
			this->CloseButton->UseVisualStyleBackColor = false;
			this->CloseButton->UseWaitCursor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &AuthorisationForm::CloseButton_Click);
			// 
			// EntryButton
			// 
			this->EntryButton->BackColor = System::Drawing::Color::Green;
			this->EntryButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EntryButton->Location = System::Drawing::Point(354, 233);
			this->EntryButton->Name = L"EntryButton";
			this->EntryButton->Size = System::Drawing::Size(163, 53);
			this->EntryButton->TabIndex = 7;
			this->EntryButton->Text = L"Вход";
			this->EntryButton->UseVisualStyleBackColor = false;
			this->EntryButton->UseWaitCursor = true;
			this->EntryButton->Click += gcnew System::EventHandler(this, &AuthorisationForm::EnterButton_Click);
			// 
			// AuthorisationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(636, 389);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->EntryButton);
			this->Controls->Add(this->NoAccountLink);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->loginTextBox);
			this->Controls->Add(this->PasswordLabel);
			this->Controls->Add(this->LoginLabel);
			this->Controls->Add(this->AuthLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"AuthorisationForm";
			this->Text = L"AuthorisationForm";
			this->UseWaitCursor = true;
			this->Load += gcnew System::EventHandler(this, &AuthorisationForm::AuthorisationForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void AuthorisationForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		PasswordTextBox->PasswordChar = '*';
	}

private: System::Void NoAccount_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) 
{
	RegistrationForm^ regForm = gcnew RegistrationForm();
	regForm->Show();
	AuthorisationForm::Hide();
}

private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Application::Exit();
}

private: System::Void EnterButton_Click(System::Object^ sender, System::EventArgs^ e) 
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
};
}
