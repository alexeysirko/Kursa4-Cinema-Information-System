#pragma once

namespace Kursa4
{
	using namespace System;

	/// <summary>
	/// Models interface
	/// </summary>
	ref class Models
	{
	public:
		void virtual AddInFile(String^ fileName, bool append) = 0;
	}; 
}


