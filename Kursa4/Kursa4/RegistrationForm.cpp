#include "RegistrationForm.h"
#include <Windows.h>
using namespace Kursa4; // �������� �������

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew RegistrationForm);
	return 0;
}