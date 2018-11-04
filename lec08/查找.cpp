#include<bits/stdc++.h>
using namespace std;
///计算1~n中是否有一个数能被3，5整除
int main() {
	int n;
	cin>>n;
	int s=0;
	int i=1;
	while(i<=n) {
		if(i%3==0&&i%5==0) {
		  s=1;
		  break; 
		}
		i++;
	}
	cout<<s<<endl;
	return 0;
}
