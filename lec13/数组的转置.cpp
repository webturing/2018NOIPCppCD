#include<bits/stdc++.h>
using namespace std;

int main() {
	int a[5];
	for(int i=0;i<5;i++)
		cin>>a[i]; 
	//����a[0] a[4]
	int t=a[0];a[0]=a[4];a[4]=t; 
	//����a[1] a[3] 
	t=a[1];a[1]=a[3];a[3]=t;
	
	for(int i=0; i<5; i++)//˳����� 0~n-1
			cout<<a[i]<<" ";
	cout<<endl;

	return 0;
}
