#include<cstring>
#include<string>
#include <iostream>

using namespace std;
//第一个不同的字符
int n = 0;

int main() {
	char str[40];
	cin >> str;
	int count[256] = {};
	while (str[n] != '\0') {
		count[str[n]]++;
		n++;
	}
	n = 0;
	while (str[n] != '\0') {
		if (count[str[n]] == 1) {
			cout << n + 1;
			return 0;
		}
		n++;
	}
	return 0;
}