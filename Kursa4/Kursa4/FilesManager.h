#pragma once
using namespace System::IO;

static class FilesManager
{
public:
	static void WriteInFile(System::String^ fileName, System::String^ text)
	{
		StreamWriter^ file= gcnew StreamWriter(fileName, true);
		file->Write(text);
		file->Close();
	}
};

