#include <iostream>
#include <conio.h>

using namespace std;

int sum_of_digits(int m) {
	if (m < 10) return m;
	return sum_of_digits(m / 10) + m % 10;
}

int main() {
	int m;
	cin >> m;
	cout << sum_of_digits(m);

	_getch();
	return 0;
}