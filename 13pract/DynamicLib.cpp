#include <iostream>
#include <string>
using namespace std;

extern"C" __declspec(dllexport) bool stroka(string fir, string sec)
{
	setlocale(LC_ALL, "ru");
	int len1 = size(fir);
	int size1 = size(sec);
	int count = 0;
	int j = 0;
	for (int i = 0; i < len1; i++)
	{
		if (fir[i] == sec[j])
		{
			count++;
			j++;
		}
	}
	if (count == size1)
	{
		cout << "true" << endl;
		return true;
	}
	else
	{
		cout << "false" << endl;
		return false;
	}
}