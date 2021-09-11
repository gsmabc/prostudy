#include<cstring>
#include<string>
#include <iostream>
#include <algorithm>

using namespace std;
//通关码


int main() {
	string a;
	cin >> a;
	int num = 0, ans = 1;
	char x;
	for (int i = 0; i < a.length() - 1; ++i) {
		if (a[i] != '-') {
			num++;
			ans += (a[i] - '0') * num;

		}

	}
	ans = ans % 11;
	if (ans == 11) {
		x = 'X';
	} else {
		x = ans + '0';
	}
	if (a[a.length() - 1] == x) {
		cout << "Right";
	} else {
		cout << "No";
	}
	return -114514;
}