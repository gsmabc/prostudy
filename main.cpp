//(rand() % (b-a+1))+ a;
#include<iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <cstring>

using namespace std;

//统计有效字母/数字
int main() {
	char a[100];
	int count = 0;
	gets(a);
	for (int i = 0; i < strlen(a); ++i) {
		if (isalpha(a[i]) || isdigit(a[i])) {
			count++;
		}
	}
	cout << count;


	return 0;
}