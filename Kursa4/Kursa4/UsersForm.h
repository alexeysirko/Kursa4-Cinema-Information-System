#pragma once
#include "UsersList.h"

namespace Kursa4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UsersForm
	/// </summary>
	public ref class UsersForm : public System::Windows::Forms::Form
	{
	public:
		UsersForm(void)
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
		~UsersForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ adminsListBox;
	private: System::Windows::Forms::ListBox^ usersListBox;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ goBack;

	private: System::Windows::Forms::Label^ label3;
	
	private: List<User^>^ adminsList = UsersList().GetAdmins();
	private: List<User^>^ usersList = UsersList().GetUsers();
	
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
			this->adminsListBox = (gcnew System::Windows::Forms::ListBox());
			this->usersListBox = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->goBack = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// adminsListBox
			// 
			this->adminsListBox->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->adminsListBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->adminsListBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->adminsListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->adminsListBox->FormattingEnabled = true;
			this->adminsListBox->ItemHeight = 31;
			this->adminsListBox->Location = System::Drawing::Point(93, 82);
			this->adminsListBox->Name = L"adminsListBox";
			this->adminsListBox->Size = System::Drawing::Size(184, 343);
			this->adminsListBox->Sorted = true;
			this->adminsListBox->TabIndex = 2;
			this->adminsListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &UsersForm::adminsListBox_SelectedIndexChanged);
			// 
			// usersListBox
			// 
			this->usersListBox->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->usersListBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->usersListBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->usersListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->usersListBox->FormattingEnabled = true;
			this->usersListBox->ItemHeight = 31;
			this->usersListBox->Location = System::Drawing::Point(354, 82);
			this->usersListBox->Name = L"usersListBox";
			this->usersListBox->Size = System::Drawing::Size(184, 343);
			this->usersListBox->TabIndex = 3;
			this->usersListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &UsersForm::usersListBox_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(128, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 29);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Админы";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(357, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 29);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Пользователи";
			// 
			// goBack
			// 
			this->goBack->AutoSize = true;
			this->goBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->goBack->Location = System::Drawing::Point(13, 13);
			this->goBack->Name = L"goBack";
			this->goBack->Size = System::Drawing::Size(52, 18);
			this->goBack->TabIndex = 6;
			this->goBack->TabStop = true;
			this->goBack->Text = L"Назад";
			this->goBack->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &UsersForm::goBack_LinkClicked);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(202, 457);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(258, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Нажмите на пользователя, чтобы изменить роль";
			// 
			// UsersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(645, 498);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->goBack);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->usersListBox);
			this->Controls->Add(this->adminsListBox);
			this->Name = L"UsersForm";
			this->Text = L"UsersForm";
			this->Load += gcnew System::EventHandler(this, &UsersForm::UsersForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void UsersForm_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void adminsListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void usersListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

	private: void ShowAdmins();

	private: void ShowUsers();
	
	private: System::Void goBack_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
};
}
