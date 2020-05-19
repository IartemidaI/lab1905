#include <windows.h>;
#include <stdio.h>;
void GetError() 
{
	DWORD dw = GetLastError();
	printf("GetLastError returned %u\n", dw);
}
void SetError() {
	DWORD dw = ERROR_FILE_NOT_FOUND;
	SetLastError(dw);
}
void main() {
	SetError();
	GetError();
}
