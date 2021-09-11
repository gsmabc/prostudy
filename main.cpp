#include <iostream>

using namespace std;

//去空格/指定字符
string str_stp(string str, char c = ' ') {
	string s;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != c) {
			s += str[i];
		}
	}
	return s;
}

int main() {
	string str;
	getline(cin, str);
	char c;
	cin >> c;
	if ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z') {
		cout << str_stp(str, c);
	} else {
		cout << str_stp(str);
	}
	return 0;
}