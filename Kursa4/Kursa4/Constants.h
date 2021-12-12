#pragma once

namespace Kursa4
{
	using namespace System;

	ref class Constants
	{
	public:
		static String^ FILMS_FILE = "FilmsData.txt";
		static String^ USERS_FILE = "AccountsData.txt";
		static int ADMIN_ROLE = 1;
		static int USER_ROLE = 0;
	};
}

