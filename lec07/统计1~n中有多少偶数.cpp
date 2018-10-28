#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int s=0;//计数器清0 
	int i=1;
	while(i<=n) {
		if(i%2==0) 
			s++;//s增加1 
		i++;
	}
	cout<<s;//输出s的值 就是1-n中的偶数个数 
	return 0;
}
