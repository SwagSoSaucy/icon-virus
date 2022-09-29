#include <windows.h>

#define SW 1920
#define SH 1080

HICON icons[] = {
	LoadIcon(NULL, IDI_ERROR),
	LoadIcon(NULL, IDI_WARNING),
	LoadIcon(NULL, IDI_INFORMATION), 
	LoadIcon(NULL, IDI_QUESTION)

};

size_t s_icons = sizeof(icons);

void DrawIcons() {
	HWND hWnd = GetDesktopWindow();
	HDC hdc = GetWindowDC(hWnd);

	DrawIcon(hdc, rand() % SW, rand() % SH, icons[rand() % s_icons ]);

	ReleaseDC(hWnd, hdc);


}
int main() {

	while (1) {

	DrawIcons();


	
	}
	return 0;

}
