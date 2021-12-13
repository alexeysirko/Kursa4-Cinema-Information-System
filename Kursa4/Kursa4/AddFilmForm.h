#pragma once
#include "Constants.h"
#include "Film.h"
#include "FilmsList.h"

namespace Kursa4 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddFilmForm
	/// </summary>
	public ref class AddFilmForm : public System::Windows::Forms::Form
	{
	public:
		AddFilmForm()
		{
			InitializeComponent();
		}

		/// <summary>
		/// Edit existing film constructor
		/// </summary>
		AddFilmForm(Film^ film)
		{
			InitializeComponent();

			this->film = film;
			isEditing = true;

			filmName->Text = film->name;
			Genre->Text = film->genre;
			Director->Text = film->director;
			mainRole->Text = film->mainRole;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddFilmForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ Genre;

	private: System::Windows::Forms::TextBox^ filmName;
	private: System::Windows::Forms::TextBox^ Director;
	private: System::Windows::Forms::TextBox^ mainRole;
	private: System::Windows::Forms::Button^ SaveButton;
	private: System::Windows::Forms::Button^ CloseButton;

	private: bool isEditing = false;
	private: Film^ film;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Genre = (gcnew System::Windows::Forms::ComboBox());
			this->filmName = (gcnew System::Windows::Forms::TextBox());
			this->Director = (gcnew System::Windows::Forms::TextBox());
			this->mainRole = (gcnew System::Windows::Forms::TextBox());
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Название";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Режисёр";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 284);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Главная роль";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Жанр";
			// 
			// Genre
			// 
			this->Genre->BackColor = System::Drawing::Color::DarkGray;
			this->Genre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Genre->FormattingEnabled = true;
			this->Genre->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Хоррор", L"Фантастика", L"Комедия", L"Мультфильм",
					L"Драма"
			});
			this->Genre->Location = System::Drawing::Point(32, 147);
			this->Genre->Name = L"Genre";
			this->Genre->Size = System::Drawing::Size(255, 32);
			this->Genre->TabIndex = 4;
			// 
			// filmName
			// 
			this->filmName->BackColor = System::Drawing::Color::DarkGray;
			this->filmName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->filmName->Location = System::Drawing::Point(32, 55);
			this->filmName->Name = L"filmName";
			this->filmName->Size = System::Drawing::Size(255, 29);
			this->filmName->TabIndex = 5;
			// 
			// Director
			// 
			this->Director->BackColor = System::Drawing::Color::DarkGray;
			this->Director->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Director->Location = System::Drawing::Point(32, 234);
			this->Director->Name = L"Director";
			this->Director->Size = System::Drawing::Size(255, 29);
			this->Director->TabIndex = 6;
			// 
			// mainRole
			// 
			this->mainRole->BackColor = System::Drawing::Color::DarkGray;
			this->mainRole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mainRole->Location = System::Drawing::Point(32, 323);
			this->mainRole->Name = L"mainRole";
			this->mainRole->Size = System::Drawing::Size(255, 29);
			this->mainRole->TabIndex = 7;
			// 
			// SaveButton
			// 
			this->SaveButton->BackColor = System::Drawing::Color::ForestGreen;
			this->SaveButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->SaveButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SaveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SaveButton->Location = System::Drawing::Point(32, 380);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(176, 50);
			this->SaveButton->TabIndex = 8;
			this->SaveButton->Text = L"Сохранить";
			this->SaveButton->UseVisualStyleBackColor = false;
			this->SaveButton->Click += gcnew System::EventHandler(this, &AddFilmForm::SaveButton_Click);
			// 
			// CloseButton
			// 
			this->CloseButton->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->CloseButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CloseButton->Location = System::Drawing::Point(269, 380);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(176, 50);
			this->CloseButton->TabIndex = 9;
			this->CloseButton->Text = L"Отмена";
			this->CloseButton->UseVisualStyleBackColor = false;
			this->CloseButton->Click += gcnew System::EventHandler(this, &AddFilmForm::CloseButton_Click);
			// 
			// AddFilmForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(487, 461);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->SaveButton);
			this->Controls->Add(this->mainRole);
			this->Controls->Add(this->Director);
			this->Controls->Add(this->filmName);
			this->Controls->Add(this->Genre);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AddFilmForm";
			this->ShowIcon = false;
			this->Text = L"AddFilmForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void SaveButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
