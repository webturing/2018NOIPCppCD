#include<bits/stdc++.h>
using namespace std;
//�Ӽ���������10������Ȼ��������һ����ͳ�Ƶ���x
//���x�ĳ��ִ���
//SampleInput
//1 2 3 4 1 3 4 8 0 9
//4
//SampleOutput
//2
int main() {
	int a[10];
	for(int i=0; i<10; i++)cin>>a[i];
	int x;
	cin>>x;
	int s=0;
	for(int i=0; i<10; i++) {
		if(a[i]==x) {
			s++;
		}
	}
	cout<<s<<endl;

	return 0;
}
