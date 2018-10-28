#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int s=0;
	while(n>0){
	    n=n/10;
	    s++;
	}
	cout<<s<<endl;
	return 0;
}
