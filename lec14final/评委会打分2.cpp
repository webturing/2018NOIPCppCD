#include<bits/stdc++.h>
using namespace std;
//�Ӽ���������10���� ȥ��һ����߷֡�ȥ��һ����ͷ֣�ʣ�µ�8���ɼ���ƽ��ֵ������С�������λ)
int main() {
	int a[10];
	for(int i=0; i<10; i++)cin>>a[i];
	sort(a,a+10);
	for(int i=0;i<10;i++)cout<<a[i]<<" ";
	cout<<endl;
	int Sum=0;
	for(int i=1;i<=8;i++)Sum+=a[i];
	cout<<fixed<<setprecision(2)<<Sum/8.0<<endl;
	return 0;
}
