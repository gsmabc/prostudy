#include <iostream>

using namespace std;
int t[3] = {1, 2, 3};

void setDice(const char d) {
	int u, f, r;
	switch (d) {
		case 'R':
			u = 7 - t[2];
			f = t[1];
			r = t[0];
			break;
		case 'D':
			u = 7 - t[1];
			f = t[0];
			r = t[2];
			break;
		case 'L':
			u = t[2];
			f = t[1];
			r = 7 - t[0];
			break;
	}
	t[0] = u;
	t[1] = f;
	t[2] = r;
}

int main() {
	int r, c, sum = 0;
	bool flag = true;
	cin >> r >> c;
	for (int i = 1; i <= r; i++) {
		if (flag) {
			for (int j = 1; j < c; j++) {
				sum += t[0];
				setDice('R');
			}
		} else {
			for (int j = c; j > 1; j--) {
				sum += t[0];
				setDice('L');
			}
		}
		sum += t[0];
		setDice('D');
		flag = !flag;
	}
	cout << sum;
	return 0;
}