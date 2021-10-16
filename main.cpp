//20211016-作业-1
/*
一：补全代码：

题目名称：出场顺序
【题目描述】
元宵节晚会上，参加节目表演的同学需要抽签决定出场顺序，序号小的同学先出场，现在已知n（0<n<100）位同学的姓名和抽到的号码（无重复），请将同学们的姓名，按照出场次序输出。
注：假设班上无同名的学生。
【样例输入】
5
xinyu 4
haomiao 3
tiansen 6
jintao 2
zhangze 5
【样例输出】
jintao
haomiao
xinyu
zhangze
tiansen
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct stu{
	string name;
	int code;
};
bool cmp(stu a,stu b){
	return __________
}
int main(){
	int n;
	stu s[101];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i].name>>s[i].code;
	}
	sort(s,s+n,cmp);
	for(int i=0;i<n;i++)
		cout<<s[i].name<<endl;
	return 0;
}
则横线处应该填写的代码是(     )
A a<b; B a.code<b.code;  C a.code>b.code;  D a>b;
答案：B



二：程序编写题

题目名称：压岁钱
【问题描述】
春节时期，同学们都收到了很多的压岁钱（整数），现在小童想知道班上压岁钱最多的同学，请你来帮他编程实现。
【样例输入】
5
zhangze 380
zhuhaomiao 1250
tiansen 2500
zhaoyatao 6666
yangxueqing 6666
【样例输出】
zhaoyatao 6666
yangxueqing 6666
*/
#include<iostream>
#include <cstring>
#include <algorithm>

using namespace std;
struct Student {
	string name;
	int money;
};

bool cmp(Student a, Student b) {
	return a.money > b.money;
}

int main() {
	int n;
	Student students[101];
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> students[i].name >> students[i].money;
	}
	sort(students, students + n, cmp);
	for (int i = 0; i < n; ++i) {
		if (students[i].money == students[0].money) {
			cout << students[i].name << " " << students[i].money << endl;
		}
	}
	return 0;
}