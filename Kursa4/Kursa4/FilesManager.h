#pragma once
#include "User.h"

namespace Kursa4
{
	using namespace std;
	using namespace System::Windows::Forms;
	using namespace System;
	using namespace System::IO;
	using namespace System::Collections::Generic;

	class FilesManager
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
			const int PARAMSCOUNT = 3;
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

					case PARAMSCOUNT:
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
					MessageBox::Show("Файл пользователей не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				}
				else
				{
					MessageBox::Show("Файл пользователей повреждён!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				}
			}
			finally
			{
				//Clearing last empty element created in switch-case
				users->RemoveAt(users->Count - 1);
			}

			return users;
		}
	};
}

