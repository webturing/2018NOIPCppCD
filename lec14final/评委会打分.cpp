#include<bits/stdc++.h>
using namespace std;
//�Ӽ���������10���� ȥ��һ����߷֡�ȥ��һ����ͷ֣�ʣ�µ�8���ɼ���ƽ��ֵ������С�������λ)
int main() {
	int a[10];
	for(int i=0; i<10; i++)cin>>a[i];
	int Max=a[0];
	for(int i=1; i<10; i++) {
		if(a[i]>Max)Max=a[i];
	}
	int Min=a[0];
	for(int i=1; i<10; i++) {
		if(a[i]<Min)Min=a[i];
	}
	int Sum=0;
	for(int i=0; i<10; i++)
		Sum=Sum+a[i];
	double avg=(Sum-Min-Max)/8.0;
	cout<<fixed<<setprecision(2)<<avg<<endl;
	return 0;
}
