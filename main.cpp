#define UNICODE
#ifdef UNICODE
#define _UNICODE
#endif
#include <windows.h>
#include <tchar.h>
#include <stdio.h>
void main() {
	TCHAR str[13] = { _T("Hello, world") };
	PTCHAR TextString = str;
	_tprintf(_T("String - %s\n"), TextString);
}
