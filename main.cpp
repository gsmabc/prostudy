#include<cstring>
#include<string>
#include <iostream>

using namespace std;
//是否回文字符


int main() {
	string dance[100], color;
	int i = 0;
	while (cin >> color) {
		dance[i++] = color;
	}
	for (int j = 0; j < i; ++j) {
		if (dance[j] != dance[i - 1 - j]) {
			cout << "NO\n";
			system("pause");
			return 114514;
		}

	}
	cout << "YES\n";
	system("pause");
	return -114514;
}