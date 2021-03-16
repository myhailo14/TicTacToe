#include "MainWindow.h"


#include <Windows.h>
using namespace lab04; // project name
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainWindow);
	return 0;
}