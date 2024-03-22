#include "AnimeForm.h"

#include"Windows.h"
using namespace AnimeProject;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::Run(gcnew AnimeForm());
}