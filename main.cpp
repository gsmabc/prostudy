#include <iostream>
//辗转相除法-最大公约数
#include<iostream>
#include<string>

using namespace std;

string MtoN(int m, int n) {
	char table[16];       //依次表示01234...9ABCDEF（表示0~15）
	if (m < 0)               //负数转换为正数
		m = m * (-1);
	for (int i = 0; i < 16; i++) {
		if (i < 10)
			table[i] = i + '0';       //转换为字符是是（加）+'0',不能为（减）-'0'.
		else
			table[i] = i - 10 + 'A';
	}
	string res;
	while (m) {
		int temp = m % n;
		char t = table[temp];
		res = t + res;
		m = m / n;
	}
	return res;
}

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	} else {
		return gcd(b, a % b);
	}
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << a * b / gcd(a, b);
	return 0;


}