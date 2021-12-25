#include<iostream>
using namespace std;
int main() {
	int num, i, sum = 0;
	for (i = 0; i < 25; i++) {
		cin >> num;
		sum += num;
	}
	sum = 182 - sum;
	cout << sum;
	return 0;
}