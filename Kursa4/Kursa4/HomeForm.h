#pragma once
#include "FilmsList.h"
#include "FilmForm.h"
#include "AddFilmForm.h"


namespace Kursa4
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HomeForm
	/// </summary>
	public ref class HomeForm : public System::Windows::Forms::Form
	{
	public:
		HomeForm(int role)
		{
			InitializeComponent();
			this->role = role;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HomeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ AddButton;


	private: System::Windows::Forms::ListBox^ filmsListBox;
	private: int role;
	private: List<Film^>^ originalFilms;
	private: List<Film^>^ filteredFilms;
	List<String^>^ genresNames = gcnew List<String^>;
	private: System::Windows::Forms::Button^ SelectAllButton;
	private: System::Windows::Forms::CheckBox^ horrorTextBox;
	private: System::Windows::Forms::CheckBox^ fantasyCheckBox;
	private: System::Windows::Forms::CheckBox^ cartoonCheckBox;
	private: System::Windows::Forms::CheckBox^ dramaCheckBox;
	private: System::Windows::Forms::CheckBox^ comedyCheckBox;
	private: System::Windows::Forms::TextBox^ searchTextBox;	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ findButton;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ usersButton;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->filmsListBox = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->SelectAllButton = (gcnew System::Windows::Forms::Button());
			this->horrorTextBox = (gcnew System::Windows::Forms::CheckBox());
			this->fantasyCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->cartoonCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->dramaCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->comedyCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->findButton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->usersButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// filmsListBox
			// 
			this->filmsListBox->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->filmsListBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->filmsListBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->filmsListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->filmsListBox->FormattingEnabled = true;
			this->filmsListBox->ItemHeight = 31;
			this->filmsListBox->Location = System::Drawing::Point(34, 146);
			this->filmsListBox->Name = L"filmsListBox";
			this->filmsListBox->Size = System::Drawing::Size(787, 312);
			this->filmsListBox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(274, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(333, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Добро пожаловать!";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(27, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 42);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Афиша:";
			// 
			// AddButton
			// 
			this->AddButton->BackColor = System::Drawing::Color::SandyBrown;
			this->AddButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->AddButton->Location = System::Drawing::Point(34, 496);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(149, 38);
			this->AddButton->TabIndex = 3;
			this->AddButton->Text = L"+ Добавить";
			this->AddButton->UseVisualStyleBackColor = false;
			this->AddButton->Click += gcnew System::EventHandler(this, &HomeForm::AddButton_Click);
			// 
			// SelectAllButton
			// 
			this->SelectAllButton->BackColor = System::Drawing::Color::LightSteelBlue;
			this->SelectAllButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SelectAllButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SelectAllButton->Location = System::Drawing::Point(222, 494);
			this->SelectAllButton->Name = L"SelectAllButton";
			this->SelectAllButton->Size = System::Drawing::Size(98, 28);
			this->SelectAllButton->TabIndex = 5;
			this->SelectAllButton->Text = L"Выбрать все";
			this->SelectAllButton->UseVisualStyleBackColor = false;
			this->SelectAllButton->Click += gcnew System::EventHandler(this, &HomeForm::selectAllButton_Click);
			// 
			// horrorTextBox
			// 
			this->horrorTextBox->AutoSize = true;
			this->horrorTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->horrorTextBox->Location = System::Drawing::Point(222, 540);
			this->horrorTextBox->Name = L"horrorTextBox";
			this->horrorTextBox->Size = System::Drawing::Size(83, 28);
			this->horrorTextBox->TabIndex = 6;
			this->horrorTextBox->Text = L"Horror";
			this->horrorTextBox->UseVisualStyleBackColor = true;
			this->horrorTextBox->CheckedChanged += gcnew System::EventHandler(this, &HomeForm::horrorTextBox_CheckedChanged);
			// 
			// fantasyCheckBox
			// 
			this->fantasyCheckBox->AutoSize = true;
			this->fantasyCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->fantasyCheckBox->Location = System::Drawing::Point(337, 584);
			this->fantasyCheckBox->Name = L"fantasyCheckBox";
			this->fantasyCheckBox->Size = System::Drawing::Size(94, 28);
			this->fantasyCheckBox->TabIndex = 7;
			this->fantasyCheckBox->Text = L"Fantasy";
			this->fantasyCheckBox->UseVisualStyleBackColor = true;
			this->fantasyCheckBox->CheckedChanged += gcnew System::EventHandler(this, &HomeForm::fantasyCheckBox_CheckedChanged);
			// 
			// cartoonCheckBox
			// 
			this->cartoonCheckBox->AutoSize = true;
			this->cartoonCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->cartoonCheckBox->Location = System::Drawing::Point(337, 540);
			this->cartoonCheckBox->Name = L"cartoonCheckBox";
			this->cartoonCheckBox->Size = System::Drawing::Size(95, 28);
			this->cartoonCheckBox->TabIndex = 8;
			this->cartoonCheckBox->Text = L"Cartoon";
			this->cartoonCheckBox->UseVisualStyleBackColor = true;
			this->cartoonCheckBox->CheckedChanged += gcnew System::EventHandler(this, &HomeForm::cartoonCheckBox_CheckedChanged);
			// 
			// dramaCheckBox
			// 
			this->dramaCheckBox->AutoSize = true;
			this->dramaCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dramaCheckBox->Location = System::Drawing::Point(222, 584);
			this->dramaCheckBox->Name = L"dramaCheckBox";
			this->dramaCheckBox->Size = System::Drawing::Size(84, 28);
			this->dramaCheckBox->TabIndex = 9;
			this->dramaCheckBox->Text = L"Drama";
			this->dramaCheckBox->UseVisualStyleBackColor = true;
			this->dramaCheckBox->CheckedChanged += gcnew System::EventHandler(this, &HomeForm::dramaCheckBox_CheckedChanged);
			// 
			// comedyCheckBox
			// 
			this->comedyCheckBox->AutoSize = true;
			this->comedyCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comedyCheckBox->Location = System::Drawing::Point(337, 494);
			this->comedyCheckBox->Name = L"comedyCheckBox";
			this->comedyCheckBox->Size = System::Drawing::Size(100, 28);
			this->comedyCheckBox->TabIndex = 10;
			this->comedyCheckBox->Text = L"Comedy";
			this->comedyCheckBox->UseVisualStyleBackColor = true;
			this->comedyCheckBox->CheckedChanged += gcnew System::EventHandler(this, &HomeForm::comedyCheckBox_CheckedChanged);
			// 
			// searchTextBox
			// 
			this->searchTextBox->BackColor = System::Drawing::Color::LightSteelBlue;
			this->searchTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchTextBox->Location = System::Drawing::Point(517, 537);
			this->searchTextBox->Name = L"searchTextBox";
			this->searchTextBox->Size = System::Drawing::Size(255, 31);
			this->searchTextBox->TabIndex = 11;
			// 
			// findButton
			// 
			this->findButton->BackColor = System::Drawing::Color::LightSteelBlue;
			this->findButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->findButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->findButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->findButton->Location = System::Drawing::Point(778, 536);
			this->findButton->Name = L"findButton";
			this->findButton->Size = System::Drawing::Size(67, 32);
			this->findButton->TabIndex = 13;
			this->findButton->Text = L"Найти";
			this->findButton->UseVisualStyleBackColor = false;
			this->findButton->Click += gcnew System::EventHandler(this, &HomeForm::findButton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(521, 509);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(207, 25);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Поиск по названию";
			// 
			// usersButton
			// 
			this->usersButton->BackColor = System::Drawing::Color::Teal;
			this->usersButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->usersButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->usersButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->usersButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->usersButton->Location = System::Drawing::Point(34, 572);
			this->usersButton->Name = L"usersButton";
			this->usersButton->Size = System::Drawing::Size(149, 40);
			this->usersButton->TabIndex = 15;
			this->usersButton->Text = L"Пользователи";
			this->usersButton->UseVisualStyleBackColor = false;
			this->usersButton->Click += gcnew System::EventHandler(this, &HomeForm::usersButton_Click);
			// 
			// HomeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(861, 638);
			this->ControlBox = false;
			this->Controls->Add(this->usersButton);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->findButton);
			this->Controls->Add(this->searchTextBox);
			this->Controls->Add(this->comedyCheckBox);
			this->Controls->Add(this->dramaCheckBox);
			this->Controls->Add(this->cartoonCheckBox);
			this->Controls->Add(this->fantasyCheckBox);
			this->Controls->Add(this->horrorTextBox);
			this->Controls->Add(this->SelectAllButton);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->filmsListBox);
			this->Name = L"HomeForm";
			this->Text = L"HomeForm";
			this->Load += gcnew System::EventHandler(this, &HomeForm::HomeForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void HomeForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void filmsListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: void ShowFilmsList();
	private: void CheckAll();
	private: System::Void selectAllButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: void SetFilmsGenres();
	private: System::Void comedyCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void horrorTextBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void cartoonCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dramaCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void fantasyCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void findButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void usersButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
