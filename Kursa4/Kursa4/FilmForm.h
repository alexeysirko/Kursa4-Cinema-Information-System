#pragma once
#include "Film.h"
#include "FilmsList.h"
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
	/// Summary for FilmForm
	/// </summary>
	public ref class FilmForm : public System::Windows::Forms::Form
	{
	public:
		FilmForm(Film^ film, int role)
		{
			InitializeComponent();
			this->film = film;
			this->role = role;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FilmForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ FilmName;
	private: System::Windows::Forms::PictureBox^ FilmImage;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ Genre;
	private: System::Windows::Forms::Label^ Director;
	private: System::Windows::Forms::Label^ MainRole;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ Watches;
	private: System::Windows::Forms::Button^ watchButton;

	private: Film^ film;
	private: int role;
	private: System::Windows::Forms::LinkLabel^ BackLink;
	private: System::Windows::Forms::Button^ editButton;




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
			this->FilmName = (gcnew System::Windows::Forms::Label());
			this->FilmImage = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Genre = (gcnew System::Windows::Forms::Label());
			this->Director = (gcnew System::Windows::Forms::Label());
			this->MainRole = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Watches = (gcnew System::Windows::Forms::Label());
			this->watchButton = (gcnew System::Windows::Forms::Button());
			this->BackLink = (gcnew System::Windows::Forms::LinkLabel());
			this->editButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FilmImage))->BeginInit();
			this->SuspendLayout();
			// 
			// FilmName
			// 
			this->FilmName->AutoSize = true;
			this->FilmName->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FilmName->Location = System::Drawing::Point(30, 20);
			this->FilmName->Name = L"FilmName";
			this->FilmName->Size = System::Drawing::Size(198, 48);
			this->FilmName->TabIndex = 0;
			this->FilmName->Text = L"FilmName";
			// 
			// FilmImage
			// 
			this->FilmImage->BackColor = System::Drawing::Color::Aqua;
			this->FilmImage->Location = System::Drawing::Point(38, 71);
			this->FilmImage->Name = L"FilmImage";
			this->FilmImage->Size = System::Drawing::Size(252, 244);
			this->FilmImage->TabIndex = 1;
			this->FilmImage->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(355, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Жанр:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(355, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Режиссёр:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(355, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Главная роль:";
			// 
			// Genre
			// 
			this->Genre->AutoSize = true;
			this->Genre->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Genre->Location = System::Drawing::Point(434, 101);
			this->Genre->Name = L"Genre";
			this->Genre->Size = System::Drawing::Size(61, 23);
			this->Genre->TabIndex = 5;
			this->Genre->Text = L"Genre";
			// 
			// Director
			// 
			this->Director->AutoSize = true;
			this->Director->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Director->Location = System::Drawing::Point(478, 149);
			this->Director->Name = L"Director";
			this->Director->Size = System::Drawing::Size(78, 23);
			this->Director->TabIndex = 6;
			this->Director->Text = L"Director";
			// 
			// MainRole
			// 
			this->MainRole->AutoSize = true;
			this->MainRole->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainRole->Location = System::Drawing::Point(514, 202);
			this->MainRole->Name = L"MainRole";
			this->MainRole->Size = System::Drawing::Size(90, 23);
			this->MainRole->TabIndex = 7;
			this->MainRole->Text = L"MainRole";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(355, 255);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Просмотров:";
			// 
			// Watches
			// 
			this->Watches->AutoSize = true;
			this->Watches->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Watches->Location = System::Drawing::Point(501, 258);
			this->Watches->Name = L"Watches";
			this->Watches->Size = System::Drawing::Size(111, 23);
			this->Watches->TabIndex = 9;
			this->Watches->Text = L"WatchesINT";
			// 
			// watchButton
			// 
			this->watchButton->BackColor = System::Drawing::Color::SandyBrown;
			this->watchButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->watchButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->watchButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->watchButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->watchButton->Location = System::Drawing::Point(38, 349);
			this->watchButton->Name = L"watchButton";
			this->watchButton->Size = System::Drawing::Size(252, 47);
			this->watchButton->TabIndex = 10;
			this->watchButton->Text = L"Посмотреть";
			this->watchButton->UseVisualStyleBackColor = false;
			this->watchButton->Click += gcnew System::EventHandler(this, &FilmForm::WatchButton_Click);
			// 
			// BackLink
			// 
			this->BackLink->AutoSize = true;
			this->BackLink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BackLink->Location = System::Drawing::Point(721, 20);
			this->BackLink->Name = L"BackLink";
			this->BackLink->Size = System::Drawing::Size(58, 20);
			this->BackLink->TabIndex = 11;
			this->BackLink->TabStop = true;
			this->BackLink->Text = L"Назад";
			this->BackLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &FilmForm::BackLink_LinkClicked);
			// 
			// editButton
			// 
			this->editButton->BackColor = System::Drawing::Color::MediumAquamarine;
			this->editButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->editButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->editButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->editButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->editButton->Location = System::Drawing::Point(360, 349);
			this->editButton->Name = L"editButton";
			this->editButton->Size = System::Drawing::Size(252, 47);
			this->editButton->TabIndex = 12;
			this->editButton->Text = L"Редактировать";
			this->editButton->UseVisualStyleBackColor = false;
			this->editButton->Click += gcnew System::EventHandler(this, &FilmForm::editButton_Click);
			// 
			// FilmForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(809, 428);
			this->ControlBox = false;
			this->Controls->Add(this->editButton);
			this->Controls->Add(this->BackLink);
			this->Controls->Add(this->watchButton);
			this->Controls->Add(this->Watches);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->MainRole);
			this->Controls->Add(this->Director);
			this->Controls->Add(this->Genre);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->FilmImage);
			this->Controls->Add(this->FilmName);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"FilmForm";
			this->Text = L"FilmForm";
			this->Load += gcnew System::EventHandler(this, &FilmForm::FilmForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FilmImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void FilmForm_Load(System::Object^ sender, System::EventArgs^ e);

private: void SetFilmParameters();

private: System::Void WatchButton_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void BackLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);

private: System::Void editButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
