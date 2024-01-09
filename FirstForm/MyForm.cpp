#include "MyForm.h"
 #include <Windows.h>

using namespace FirstForm;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::Run(gcnew MyForm);
}
