#pragma once
#include "User.h"
#include "Film.h"

namespace Kursa4
{
	using namespace std;
	using namespace System::Windows::Forms;
	using namespace System;
	using namespace System::IO;
	using namespace System::Collections::Generic;

	ref class FilesManager
	{
	public:
		static void WriteInFile(String^ fileName, String^ text)
		{
			StreamWriter^ file = gcnew StreamWriter(fileName, true);
			file->Write(text);
			file->Close();
		}

		static List<User^>^ ReadUsersListFromFile(String^ fileName)
		{
			List<User^>^ users = gcnew List<User^>();
			users->Add(gcnew User());

			try
			{
				StreamReader^ file = File::OpenText(fileName);

				String^ str;
				int strokeNumber = 1;

				while ((str = file->ReadLine()) != nullptr)
				{
					switch (strokeNumber++)
					{
					case 1:
						users[users->Count - 1]->login = str;
						break;

					case 2:
						users[users->Count - 1]->password = str;
						break;

					case 3:
						users[users->Count - 1]->role = int::Parse(str);
						strokeNumber = 1;
						users->Add(gcnew User());
						break;
					}
				}
			}
			catch (Exception^ e)
			{
				if (dynamic_cast<FileNotFoundException^>(e))
				{
					MessageBox::Show("���� ������������� �� ������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				}
				else
				{
					MessageBox::Show("���� ������������� ��������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				}
			}
			finally
			{
				//Clearing last empty element created in switch-case
				users->RemoveAt(users->Count - 1);
			}

			return users;
		}

		static List<Film^>^ ReadFilmsListFromFile(String^ fileName)
		{
			List<Film^>^ films = gcnew List<Film^>();
			films->Add(gcnew Film());

			try
			{
				StreamReader^ file = File::OpenText(fileName);

				String^ str;
				int strokeNumber = 1;

				while ((str = file->ReadLine()) != nullptr)
				{
					switch (strokeNumber++)
					{
					case 1:
						films[films->Count - 1]->name = str;
						break;

					case 2:
						films[films->Count - 1]->genre = str;
						break;

					case 3:
						films[films->Count - 1]->director = str;
						break;
					
					case 4:
						films[films->Count - 1]->mainRole = str;
						break;
					
					case 5:
						films[films->Count - 1]->watches = int::Parse(str);
						break;

						strokeNumber = 1;
						films->Add(gcnew Film());
						break;
					}
				}
			}
			catch (Exception^ e)
			{
				if (dynamic_cast<FileNotFoundException^>(e))
				{
					MessageBox::Show("���� ������� �� ������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				}
				else
				{
					MessageBox::Show("���� ������� ��������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				}
			}
			finally
			{
				//Clearing last empty element created in switch-case
				films->RemoveAt(films->Count - 1);
			}

			return films;
		}
	};
}

