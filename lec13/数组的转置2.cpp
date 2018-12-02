#include<bits/stdc++.h>
using namespace std;

int main() {
	int a[10];
	for(int i=0;i<10;i++)cin>>a[i];
	
	for(int j=0;j<=4;j++){	
		int t=a[j];a[j]=a[9-j];a[9-j]=t;	//swap a[j]  a[9-j]
	}
	
	for(int i=0;i<10;i++)cout<<a[i]<<" ";
	cout<<endl;

	return 0;
}
