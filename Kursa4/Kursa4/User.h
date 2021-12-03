#pragma once

namespace Kursa4
{	
	using namespace System::Collections::Generic;

	ref class User
	{
	public:
		System::String^ login;
		System::String^ password;
		int role;

		bool AreLoginAndPasswordRight();
	};
	
}

