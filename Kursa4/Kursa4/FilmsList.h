#pragma once
#include "FilesManager.h"
#include "Constants.h"

namespace Kursa4
{
	using namespace System::Collections::Generic;

	ref class FilmsList
	{
		private:
			static List<Film^>^ filmsList = nullptr;

		public:
			static List<Film^>^ GetFilmsList()
			{
				if (filmsList == nullptr)
				{
					filmsList = FilesManager().ReadFilmsListFromFile(Constants().FILMS_FILE);
				}

				return filmsList;
			}

			static void CleaFilmsList()
			{
				filmsList->Clear();
				filmsList = nullptr;
			}
	};
}

