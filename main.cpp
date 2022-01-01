#include <iostream>
using namespace std;

bool is_prime(int a) {
	if (a <= 1) return false;
	if (a == 2) return true;
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0)return false;
	}
	return true;
}

int main() {
	int n;
	while (cin >> n && n != 0) {
		int m = 0, sum = 0, k, a[101] = {};
		for (int i = 1; i <= n; i++) {
			cin >> k;
			sum += ((m - k) > 0 ? (m - k) * 4 : (k - m) * 6) + 5;
			if (is_prime(sum + k)) a[k] = 1;
			m = k;
		}
		bool flag = false;
		for (int i = 1; i <= 100; i++) {
			if (a[i] == 1) {
				flag = true;
				cout << i << ' ';
				if (is_prime(sum + k))a[k] = 1;

			}
		}
		if (!flag) cout << "No";
		cout << endl;
	}
	return 0;
}