#include <windows.h>;
#include <tchar.h>;
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	MessageBox(NULL, _T("Bernyk Vitaliy!\n Hello, Win32 world!"), _T("Hello fromMessage Box"), MB_OK);
	return 0;
}