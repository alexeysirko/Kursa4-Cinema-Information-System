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

			List<Film^>^ films = FilmsList().GetFilmsList();

			filmsListBox->DataSource = films;
			filmsListBox->DisplayMember = "name";

			filmsListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &HomeForm::filmsListBox_SelectedIndexChanged);
			filmsListBox->BindingContext = this->BindingContext;
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
			this->SuspendLayout();
			// 
			// filmsListBox
			// 
			this->filmsListBox->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->filmsListBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->filmsListBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->filmsListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->filmsListBox->FormattingEnabled = true;
			this->filmsListBox->ItemHeight = 55;
			this->filmsListBox->Location = System::Drawing::Point(34, 146);
			this->filmsListBox->Name = L"filmsListBox";
			this->filmsListBox->Size = System::Drawing::Size(647, 332);
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
			this->AddButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->AddButton->Location = System::Drawing::Point(34, 494);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(149, 38);
			this->AddButton->TabIndex = 3;
			this->AddButton->Text = L"+ Добавить";
			this->AddButton->UseVisualStyleBackColor = false;
			this->AddButton->Click += gcnew System::EventHandler(this, &HomeForm::AddButton_Click);
			// 
			// HomeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(853, 628);
			this->ControlBox = false;
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
};
}
