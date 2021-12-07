#pragma once

namespace Kursa4
{
	using namespace System;

	ref class Constants
	{
	public:
		static String^ FILMS_FILE = "FilmsData.txt";
		static String^ USERS_FILE = "AccountsData.txt";
		static String^ ADMIN_PASSWORD = "PASSWORD";
		static String^ ADMIN_LOGIN = "ADMIN";
		static int ADMIN_ROLE = 1;
	};
}

