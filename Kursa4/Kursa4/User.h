#pragma once

namespace Kursa4
{	
	using namespace System::Collections::Generic;
	using namespace System;


	ref class User
	{
	public:
		String^ login;
		String^ password;
		int role;

		bool AreLoginAndPasswordRight();
		static bool IsLoginExist(String^ login);
		void AddInFile(String^ fileName);
	};
	
}

