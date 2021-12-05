#pragma once

namespace Kursa4
{
	using namespace System;

	ref class Film
	{
	public:
		String^ name;
		String^ genre;
		String^ director;
		String^ mainRole;
		unsigned int watches;
	};
}

