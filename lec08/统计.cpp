#include<bits/stdc++.h>
using namespace std;
///����1~n���ܱ�3��5���������ĸ���
int main() {
	int n;
	cin>>n;
	int s=0;
	int i=1;
	while(i<=n) {
		if(i%3==0&&i%5==0) {
			s+=1;
		}
		i++;
	}
	cout<<s<<endl;
	return 0;
}
