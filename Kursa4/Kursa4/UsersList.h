#pragma once
#include "FilesManager.h"
#include "Constants.h"

namespace Kursa4
{
	using namespace System::Collections::Generic;

	ref class UsersList
	{
	private:
		static List<User^>^ usersList = nullptr;

	public:
		/// <summary>
		/// Wow, singletone (0_0)
		/// </summary>
		static List<User^>^ Get()
		{
			if (usersList == nullptr)
			{
				usersList = FilesManager().ReadUsersListFromFile(Constants().USERS_FILE);
			}

			return usersList;
		}

		static void Clear()
		{
			usersList->Clear();
			usersList = nullptr;
		}

		static void EditElement(String^ userName, int role)
		{
			for (int i = 0; i < Get()->Count; i++)
			{
				if (usersList[i]->login == userName && usersList[i]->role == Constants().ADMIN_ROLE)
				{
					usersList[i]->role = Constants().USER_ROLE;
					RewriteInFile(Constants().USERS_FILE);
					return;
				}
				else if (usersList[i]->login == userName && usersList[i]->role == Constants().USER_ROLE)
				{
					usersList[i]->role = Constants().ADMIN_ROLE;
					RewriteInFile(Constants().USERS_FILE);
					return;
				}
			}
		}

		static void RewriteInFile(String^ fileName)
		{
			//Creating new file for list
			if (usersList->Count >= 1)
			{
				usersList[0]->AddInFile(fileName, false);
			}
			else return;

			//Statring with 1 because first element is already added
			for (int i = 1; i < usersList->Count; i++)
			{
				usersList[i]->AddInFile(fileName, true);
			}
		}

		static List<User^>^ GetUsers()
		{
			List<User^>^ users = gcnew List<User^>;

			for (int i = 0; i < Get()->Count; i++)
			{
				if (usersList[i]->role == Constants().USER_ROLE)
				{
					users->Add(usersList[i]);
				}
			}

			return users;
		}

		static List<User^>^ GetAdmins()
		{
			List<User^>^ users = gcnew List<User^>;

			for (int i = 0; i < Get()->Count; i++)
			{
				if (usersList[i]->role == Constants().ADMIN_ROLE)
				{
					users->Add(usersList[i]);
				}
			}

			return users;
		}
	};
}