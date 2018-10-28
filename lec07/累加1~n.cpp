#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int s=0;//累加器s清0 
	int i=1;
	while(i<=n) {
		s=s+i;//累加i到s中 
		i++;
	}
	cout<<s;//输出s的值 就是1+2+3...+n 
	return 0;
}
