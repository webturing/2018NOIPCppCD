#include<bits/stdc++.h>
using namespace std;
//�Ӽ���������10������Ȼ��������һ�������ҵ���x
//���û�ҵ� x ����Ҳ���-1
//���x�ĵ�һ�ε����������
//SampleInput
//1 2 3 4 1 3 4 8 0 9
//4
//SampleOutput
//3
int main() {
	int a[10],x;
	for(int i=0; i<10; i++)cin>>a[i];
	cin>>x;
	int flag=0;
	for(int i=0; i<10; i++) {
		if(a[i]==x) {
			flag=1;
			cout<<i<<endl;
			break;
		}
	}
	if(flag==0)cout<<-1<<endl;
	return 0;
}
