#include<bits/stdc++.h>
using namespace std;
//�Ӽ���������10��������С��������� 

int main() {
	int a[10];
	for(int i=0; i<10; i++)cin>>a[i];	
	sort(a,a+10);
	for(int i=0;i<10;i++)cout<<a[i]<<" ";
	cout<<endl; 

	return 0;
}
