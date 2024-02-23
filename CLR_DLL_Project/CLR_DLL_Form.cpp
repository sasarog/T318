#include "CLR_DLL_Form.h"

#include <Windows.h>

using namespace CLRDLLProject;

int WINAPI WinMain( HINSTANCE, HINSTANCE,LPSTR, int) {
	Application::Run(gcnew CLR_DLL_Form());

}
