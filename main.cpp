#include <iostream>
using namespace std;

int main()
{
	float one, two, three;
	cout << "Привет, введи первое число: ";
	cin >> one;
	cout << "\nПривет, введи второе число: ";
	cin >> two;
	cout << "\nПривет, введи третье число: ";
	cin >> three;
	cout << "\nМаксимальное число из введенных тобой - " << max(max(one, two), three);
	return 0;
}
