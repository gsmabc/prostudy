#include<iostream>

using namespace std;

void divisio_algorithm(int x, int y) {
	int m = x, n = y, c, t;
	if (m < n) {
		t = m;
		m = n;
		n = t;
	}
	while (c = m % n) {
		m = n;
		n = c;
	}
	cout << n << endl;
	cout << x * y / n << endl;
}

int main() {
	int a, b;
	cin >> a >> b;
	divisio_algorithm(a, b);
	return 0;
}
