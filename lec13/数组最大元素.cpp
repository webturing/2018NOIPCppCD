#include<bits/stdc++.h>
using namespace std;

int main() {
	int a[10];
	for(int i=0;i<10;i++)cin>>a[i];
	int Max=a[0];
	for(int i=1;i<10;i++){
		if(a[i]>Max)Max=a[i];
	} 
	cout<<Max<<endl;

	return 0;
}
