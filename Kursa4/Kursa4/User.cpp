#include "User.h"
#include "UsersList.h"

namespace Kursa4
{
	bool User::AreLoginAndPasswordRight()
	{
		List<User^>^ users = UsersList().GetUsersList();

		for (int i = 0; i < users->Count - 1; i++)
		{
			if (users[i]->login == login)
			{
				return users[i]->password == password ? true : false;
			}
		}

		return false;
	}
}