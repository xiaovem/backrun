#include <Windows.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, PSTR l, int n)
{
    STARTUPINFOA si;
    memset(&si, 0, sizeof(si));
    si.dwFlags = STARTF_USESHOWWINDOW;
    si.wShowWindow = SW_HIDE;
    PROCESS_INFORMATION pi;
    memset(&pi, 0, sizeof(pi));
    CreateProcessA(nullptr, l, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
}
