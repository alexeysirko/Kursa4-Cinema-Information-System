#include "User.h"
#include "UsersList.h"
#include "Constants.h"

namespace Kursa4
{
	bool User::AreLoginAndPasswordRight()
	{
		List<User^>^ users = UsersList().GetUsersList();

		for (int i = 0; i < users->Count; i++)
		{
			if (users[i]->login == login)
			{
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

	void User::AddInFile(String^ fileName, List<User^>^ usersList)
	{
		if (usersList->Count <= 0)
		{
			role = Constants().ADMIN_ROLE;
		}
		FilesManager().WriteInFile(fileName, login + "\n" + password->GetHashCode() + "\n" + role + "\n");
	}
}