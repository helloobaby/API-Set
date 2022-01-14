#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>


using namespace std;

char out[MAX_PATH];

int main(int argc,char*argv[])
{
    if (argc > 2)
    {
        cout << "Invaild useage\n";
        return -1;
    }

    HMODULE base = LoadLibraryA(argv[1]);
    if (!base)
        cout << "Invaild dll name\n";

    GetModuleFileNameA(base, out, MAX_PATH);
    cout << out << endl;

    return 0;
}

