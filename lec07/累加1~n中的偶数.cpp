#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int s=0;//�ۼ���s��0 
	int i=1;
	while(i<=n) {
		if(i%2==0) 
			s=s+i;//�ۼ�i��s�� 
		i++;
	}
	cout<<s;//���s��ֵ ����2+4...+n ��1-n�е�ż���� 
	return 0;
}
