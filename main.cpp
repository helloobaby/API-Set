#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>


using namespace std;

char out[MAX_PATH];

int main()
{
    HMODULE base = LoadLibraryA("api-ms-win-eventing-controller-l1-1-0.dll");
    GetModuleFileNameA(base, out, MAX_PATH);
    cout << out << endl;

    return 0;
}


