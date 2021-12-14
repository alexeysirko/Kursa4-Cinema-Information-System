#pragma once
#include "Models.h"

namespace Kursa4
{	
	using namespace System::Collections::Generic;
	using namespace System;


	ref class User : public Models
	{
	public:
		property String^ login;
		property String^ password;
		property int role;

		bool AreLoginAndPasswordRight(int& role);
		static bool IsLoginExist(String^ login);
		void AddInFile(String^ fileName, bool append) override;
	};
	
}

