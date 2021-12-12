#pragma once
#include "Models.h"

namespace Kursa4
{	
	using namespace System::Collections::Generic;
	using namespace System;


	ref class User : public Models
	{
	public:
		String^ login;
		String^ password;
		int role;

		bool AreLoginAndPasswordRight(int& role);
		static bool IsLoginExist(String^ login);
		void AddInFile(String^ fileName) override;
	};
	
}

