#include <iostream>
#include "Windows.h"
#include <string>
#include "..\13pract\Header.h">

using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	string fir, sec;
	cout << "Первое значение: ";
	getline(cin, fir);
	cout << "Второе значение: ";
	getline(cin, sec);

	HINSTANCE load;
	load = LoadLibrary(L"DynamicLib.dll");
	typedef bool(*str) (string, string);
	str stroka;
	stroka = (str)GetProcAddress(load, "stroka");
	stroka(fir, sec);
	FreeLibrary(load);
}