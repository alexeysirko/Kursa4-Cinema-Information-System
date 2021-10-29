#include "AuthorisationForm.h"
#include <Windows.h>
using namespace Kursa4; // Название проекта

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew AuthorisationForm);
	return 0;
}