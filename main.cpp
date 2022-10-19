#include <iostream>
#include <cmath>

using namespace std;
int a[100010][3];

int main() {
	int i = 1, j = 1, k, expect, down, max, temp, cha, xl, num, s, price, p;
	cin >> expect;
	while (cin >> a[i][1] >> a[i][2] && a[i][1] != -1 && a[i][2] != -1) {
		i++;
		if (i > 2 && a[i - 1][1] - a[i - 2][1] > 1) {
			i--;
			cha = (a[i - 1][2] - a[i][2]) / (a[i][1] - a[i - 1][1]);
			temp = a[i][1];
			for (j = a[i - 1][1] + 1; j <= temp; j++) {
				a[i][1] = j;
				a[i][2] = a[i - 1][2] - cha;
				i++;
			}
		}
	}
	cin >> down;
	i--;
	xl = a[i][2];
	while (xl > 0) {
		if (xl - down < 0)break;
		else {
			xl -= down;
			i++;
			a[i][1] = a[i - 1][1] + 1;
			a[i][2] = xl;
		}
	}
	for (j = 1; j <= 10000; j++) {
		max = -99999;
		for (k = 1; k <= i; k++) {
			num = (a[k][1] - a[1][1] + j) * a[k][2];
			if (num >= max) {
				max = num;
				price = a[k][1];
				p = 1;
			}
		}
		if (price == expect) {
			cout << j * p;
			return 0;
		}
		max = -99999;
		for (k = 1; k <= i; k++) {
			num = (a[k][1] - a[1][1] - j) * a[k][2];
			if (num >= max) {
				max = num;
				price = a[k][1];
				p = -1;
			}
		}
		if (price == expect) {
			cout << j * p;
			return 0;
		}
	}
}