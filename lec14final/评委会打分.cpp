#include<bits/stdc++.h>
using namespace std;
//从键盘上输入10个数 去掉一个最高分、去掉一个最低分，剩下的8个成绩求平均值（保留小数点后两位)
int main() {
	int a[10];
	for(int i=0; i<10; i++)cin>>a[i];
	int Max=a[0];
	for(int i=1; i<10; i++) {
		if(a[i]>Max)Max=a[i];
	}
	int Min=a[0];
	for(int i=1; i<10; i++) {
		if(a[i]<Min)Min=a[i];
	}
	int Sum=0;
	for(int i=0; i<10; i++)
		Sum=Sum+a[i];
	double avg=(Sum-Min-Max)/8.0;
	cout<<fixed<<setprecision(2)<<avg<<endl;
	return 0;
}
