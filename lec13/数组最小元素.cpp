#include<bits/stdc++.h>
using namespace std;

int main() {
	int a[10];
	for(int i=0;i<10;i++)cin>>a[i];
	int Min=a[0];
	for(int i=1;i<10;i++){
		if(a[i]<Min)Min=a[i];
	} 
	cout<<Min<<endl;

	return 0;
}
