#pragma once

namespace Kursa4
{
	using namespace System;

	ref class Film
	{
	public:
		property String^ name;
		String^ genre;
		String^ director;
		String^ mainRole;
		property unsigned int watches;
	};
}

