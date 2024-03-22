#include "AnimeForm.h"

#include"Windows.h"
using namespace AnimeProject;

[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::Run(gcnew AnimeForm());
}