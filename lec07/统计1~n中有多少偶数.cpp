#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int s=0;//��������0 
	int i=1;
	while(i<=n) {
		if(i%2==0) 
			s++;//s����1 
		i++;
	}
	cout<<s;//���s��ֵ ����1-n�е�ż������ 
	return 0;
}
