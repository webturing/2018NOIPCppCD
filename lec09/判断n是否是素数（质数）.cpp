#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin>>n;
	int s=0;
	for(int i=2;i<=n-1;i++){
		if(n%i==0){
			s=1;
			break;
		}
	}
	cout<<s;
	return 0;
}
