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

			static void ClearFilmsList()
			{
				filmsList->Clear();
				filmsList = nullptr;
			}

			static Film^ FindFilm(String^ filmName)
			{
				for (int i = 0; i < GetFilmsList()->Count; i++)
				{
					if (filmsList[i]->name == filmName)
					{
						return filmsList[i];
					}
				}

				return nullptr;
			}
	};
}

