#include "User.h"
#include "UsersList.h"
#include "Constants.h"

namespace Kursa4
{
	/// <summary>
	/// Check if Login and Password are on Users List
	/// </summary>
	/// <param name="role"> returning role of user with that login </param>
	bool User::AreLoginAndPasswordRight(int& role)
	{
		List<User^>^ users = UsersList().GetUsersList();

		for (int i = 0; i < users->Count; i++)
		{
			if (users[i]->login == login)
			{
				role = users[i]->role;
				return users[i]->password == password ? true : false;
			}
		}

		return false;
	}

	bool User::IsLoginExist(String^ login)
	{
		List<User^>^ users = UsersList().GetUsersList();

		for (int i = 0; i < users->Count; i++)
		{
			if (users[i]->login == login)
			{
				MessageBox::Show("Логин уже занят, введите другой!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				return true;
			}
		}

		return false;
	}

	void User::AddInFile(String^ fileName, bool append)
	{
		FilesManager().WriteInFile(fileName, login + "\n" + password->GetHashCode() + "\n" + role + "\n", true);
	}
}