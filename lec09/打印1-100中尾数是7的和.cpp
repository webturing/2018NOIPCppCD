#include<bits/stdc++.h>
using namespace std;
int main() {
	int n=100;
	int s=0;
	for(int i=1; i<=n; i++) {
		if(i%10==7)
			s=s+i;
	}
	cout<<s<<endl;
	return 0;
}
