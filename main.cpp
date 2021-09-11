#include <iostream>
#include <string>
using namespace std;
//字符串前N位/反输出
string str_cut(string str, int n = 0) {
	string a;
	if (!n) {
		for (int i = str.length() - 1; i >= 0; i--) {
			a += str[i];
		}
	} else {
		for (int i = 0; i < n; i++) {
			a += str[i];
		}
	}
	return a;
}

int main() {
	string str;
	int n, s;
	cin >> s >> str;
	if (s == 1) {
		cin >> n;
		cout << str_cut(str, n);
	} else {
		cout << str_cut(str);
	}
	return 0;
}