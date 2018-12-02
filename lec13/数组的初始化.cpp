#include<bits/stdc++.h>
using namespace std;

int main() {
	int a[5]={1,2,3,4,5};//完全初始化 
	//int a[5]={1,2};//部分初始化 
	//int a[]={1,2,3,4,5};//利用初始化确定数组长度 
	//int a[3]={1,2,3,4};//初始化元素超过了数组的长度，错误 
	for(int i=0; i<5; i++)
		cout<<a[i]<<" ";

	return 0;
}
