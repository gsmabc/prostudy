//20211023-2
//块数->刀数
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main() {
	int a[101] = {1, 2};
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		a[i] = a[i - 1] + i;
		if (a[i] > n) {
			cout << i;
			break;
		}
	}
	return 0;
}