//(rand() % (b-a+1))+ a;
#include<iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <cstring>

using namespace std;

//大写2小写
int main() {
	char a[100];
	gets(a);
	for (int i = 0; i < strlen(a); ++i) {
		cout << char(tolower(a[i]));
	}


	return 0;
}