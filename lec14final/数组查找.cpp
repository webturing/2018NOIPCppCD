#include<bits/stdc++.h>
using namespace std;
//从键盘上输入10个数，然后再输入一个待查找的数x
//如果没找到 x 输出找不到-1
//输出x的第一次的最早的索引
//SampleInput
//1 2 3 4 1 3 4 8 0 9
//4
//SampleOutput
//3
int main() {
	int a[10],x;
	for(int i=0; i<10; i++)cin>>a[i];
	cin>>x;
	int flag=0;
	for(int i=0; i<10; i++) {
		if(a[i]==x) {
			flag=1;
			cout<<i<<endl;
			break;
		}
	}
	if(flag==0)cout<<-1<<endl;
	return 0;
}
