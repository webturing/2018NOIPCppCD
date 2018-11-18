#include<bits/stdc++.h>
using namespace std;
int main() {
	int n=10000;
	int s=0;
	for(int i=1; i<=n; i++) {
		if(i%3==0&&i%5==0)
			s++;
	}
	cout<<s<<endl;
	return 0;
}
