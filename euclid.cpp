#include <iostream>
#include <conio.h>

using namespace std;

int euclid(int n, int m) {
	if (m == 0) return n;
	return euclid(m, n % m);
}

int main() {
	int n, m;
	cin >> n >> m;
	cout << euclid(n, m);

	_getch();
	return 0;
}