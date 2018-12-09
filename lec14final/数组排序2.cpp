#include<bits/stdc++.h>
using namespace std;
//从键盘上输入10个数，从小到大输出来 

int main() {
	int a[10];
	for(int i=0; i<10; i++)cin>>a[i];	
//	sort(a,a+5);//排序a[0]~a[4] 
sort(a+5,a+10);//排序a[5],a[6]...a[9] 
	for(int i=0;i<10;i++)cout<<a[i]<<" ";
	cout<<endl; 

	return 0;
}
