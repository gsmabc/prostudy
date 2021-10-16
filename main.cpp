//20211016-作业-2
/*
一、补全代码
题目名称:点线交织
题目描述:同一个平面内，n条直线最多有几个交点（2<=n<30）例如:两条直线是1个，三条直线是3个，4条直线是6个。
#include<iostream>
using namespace std;
int line(int n){
	if(n==2){
		return 1;
	}else{
		return _________;
	}
}
int main(){
	int n;
	cin >> n;
	cout << line(n);
	return 0;
}
1.横线处应该填写的代码是(     )
A line(n-1)+(n-1)
B line(n)+n
C line(n-1)+n
D line(n)+(n-1)
答案：A



二、程序编写题

题目名称:n的阶乘
题目描述:利用递归算法实现求n的阶乘。
样例输入：
3
样例输出：
6
*/
#include<iostream>
using namespace std;

int fab(int n) {
	if (n == 1) {
		return 1;
	} else {
		return n * fab(n - 1);
	}
}

int main() {
	int a;
	cin >> a;
	cout << fab(a);
	return 0;
}

