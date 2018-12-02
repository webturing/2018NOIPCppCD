#include<bits/stdc++.h>
using namespace std;

int main() {
	int a[5];
	for(int i=0;i<5;i++)
		cin>>a[i]; 
	for(int i=0; i<5; i++)//Ë³ÐòÊä³ö 0~n-1
			cout<<a[i]<<" ";
	cout<<endl;
	//ÄæÐòÊä³ö
	for(int i=4;i>=0;i--)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
