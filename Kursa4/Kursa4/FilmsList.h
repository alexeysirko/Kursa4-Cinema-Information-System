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

		static void RewriteInFile(String^ fileName)
		{
			//Creating new file for list
			if (filmsList->Count >= 1)
			{
				filmsList[0]->AddInFile(fileName, false);
			}

			//Statring with 1 because first element is already added
			for (int i = 1; i < filmsList->Count; i++)
			{
				filmsList[i]->AddInFile(fileName, true);
			}
		}

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

			static void EditFilm(String^ filmName, Film^ editedFilm)
			{
				for (int i = 0; i < GetFilmsList()->Count; i++)
				{
					if (filmsList[i]->name == filmName)
					{
						filmsList[i] = editedFilm;
						RewriteInFile(Constants().FILMS_FILE);
						return;
					}
				}
			}
	};
}

