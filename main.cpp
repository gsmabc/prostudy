//20211030-5
//冒泡排序大到小 优化
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
		int flag = 0;
		for (int j = 1; j <= n - i; j++) {
			if (a[j] < a[j + 1]) {
				swap(a[j], a[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0) break;
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

