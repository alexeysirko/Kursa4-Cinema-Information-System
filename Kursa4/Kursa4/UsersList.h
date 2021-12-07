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
		static List<User^>^ GetUsersList()
		{
			if (usersList == nullptr)
			{
				usersList = FilesManager().ReadUsersListFromFile(Constants().USERS_FILE);
			}

			return usersList;
		}

		static void ClearUsersList()
		{
			usersList->Clear();
			usersList = nullptr;
		}
	};
}