#include<bits/stdc++.h>
using namespace std;
int main() {

	for(int i=1; i<=100; i++) {
		if(i%10==7)continue;
		if(i%7==0)continue;
		if(i/10==7)continue;
		cout<<i<<" ";
	}

	return 0;
}
