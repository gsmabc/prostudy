//20211030-4
//冒泡排序小到大
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n - 1; i++) {
		for (int j = 1; j <= n - i; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

