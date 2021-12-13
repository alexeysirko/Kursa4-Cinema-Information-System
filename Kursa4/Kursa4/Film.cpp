#pragma once
#include "Film.h"
#include "FilesManager.h"

namespace Kursa4
{
	void Film::AddInFile(String^ fileName, bool append)
	{
		FilesManager().WriteInFile(fileName, name + "\n" + genre + "\n" + director + "\n" + mainRole + "\n" + watches + "\n", append);
	}
};