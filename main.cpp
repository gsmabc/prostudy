#include<iostream>
#include <cstring>
//小写转大写

using namespace std;

int main() {
	char s[201];

	gets(s);
	int n = strlen(s);
	for (int i = 0; i < n; ++i) {
		if (s[i] >= 90)
			cout << char(s[i] - 32);
		else
			cout << s[i];

	}
	cout << endl;
	return 0;
}
