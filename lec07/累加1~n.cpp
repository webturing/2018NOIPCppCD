#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int s=0;//�ۼ���s��0 
	int i=1;
	while(i<=n) {
		s=s+i;//�ۼ�i��s�� 
		i++;
	}
	cout<<s;//���s��ֵ ����1+2+3...+n 
	return 0;
}
