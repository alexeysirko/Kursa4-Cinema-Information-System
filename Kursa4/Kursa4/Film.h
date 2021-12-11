#pragma once
#include "Models.h"

namespace Kursa4
{
	using namespace System;

	ref class Film : public Models
	{
	public:
		void AddInFile(String^ fileName) override;

		property String^ name;
		property String^ genre;
		property String^ director;
		property String^ mainRole;
		property unsigned int watches;	
	};
}

