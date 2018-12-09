#include<bits/stdc++.h>
using namespace std;
//从键盘上输入10个数 去掉一个最高分、去掉一个最低分，剩下的8个成绩求平均值（保留小数点后两位)
int main() {
	int a[10];
	for(int i=0; i<10; i++)cin>>a[i];
	sort(a,a+10);
	for(int i=0;i<10;i++)cout<<a[i]<<" ";
	cout<<endl;
	int Sum=0;
	for(int i=1;i<=8;i++)Sum+=a[i];
	cout<<fixed<<setprecision(2)<<Sum/8.0<<endl;
	return 0;
}
