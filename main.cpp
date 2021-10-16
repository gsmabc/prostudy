//20211016-作业-3
/*
一、补全代码

题目名称:跳房子
题目描述：
小明参加了学校的趣味运动会，其中的一个项目是：跳格子。
地上画着一些格子，每个格子里写一个字，如下所示：

比赛时，先站在左上角的写着“从”字的格子里，可以横向或纵向跳到相邻的格子里，但不能跳到对角的格子或其它位置。一直要跳到“华”字结束。

要求跳过的路线刚好构成“从我做起振兴中华”这句话。
请你帮助小明算一算他一共有多少种可能的跳跃路线呢？

从我做起振
我做起振兴
做起振兴中
起振兴中华

#include <iostream>
using namespace std;
int tiao(int x,int y){
	if( _________ ){
		return 1;
	}
	return tiao(x-1,y)+tiao(x,y-1);
}
int main(){
	int x=4,y=5;
	cout << tiao(x,y);
	return 0;
}
1.横线处应该填写的代码是(     )
A x==0||y==0
B x==1||y==1
C x==0||y==1
D x==4||y==5
答案：A

二、程序编写题

题目名称:大牛生小牛
题目描述:一只刚出生的小牛，四年后生第一只小牛，以后每年生一只小牛，现有一只刚出生的小牛，问n年后有多少只牛。
样例输出:
	872
样例输入:
	20

*/
#include <iostream>

using namespace std;
int num = 1;

class Cow {
public:
	int old = 1;

	void rawCattle();


};

void Cow::rawCattle() {
	if (old > 4) {
		num++;
	}
}


int main() {
	int n;
	cin >> n;
	Cow cows[10000];
	cows[0].old = 1;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < num; ++j) {
			cows[j].old++;
			cows[j].rawCattle();
		}
	}
	cout << num;
	return 0;
}