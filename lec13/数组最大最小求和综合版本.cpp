#include<bits/stdc++.h>
using namespace std;

int main() {
	int a[10];
	for(int i=0;i<10;i++)cin>>a[i];
	int Min,Max,Sum;
	Min=Max=Sum=a[0];
	for(int i=1;i<=9;i++){
		if(a[i]>Max)Max=a[i];
		if(a[i]<Min)Min=a[i];
		Sum+=a[i]; 
	}
	cout<<Min<<" "<<Max<<" "<<Sum<<endl;
	return 0;
}
