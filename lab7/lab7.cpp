#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, digital1 = 0, digital2 = 1, sum;
	cout << "Введіть кількість чисел Фібоначчі" << endl;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		cout << digital1 << " ";
		sum = digital1 + digital2;
		digital1 = digital2;
		digital2 = sum;
	}
	return 0;
}