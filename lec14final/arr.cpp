#include<bits/stdc++.h>
using namespace std;
//从键盘上输入5个数，逆序输出这5个数 
int main()
{
	int a[5];
	int i;
	for(i=0;i<5;i++)cin>>a[i];
	for(i=4;i>=0;i--)cout<<a[i]<<" ";
	
	
	return 0;
}
