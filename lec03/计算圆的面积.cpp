#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double r;//����r����Բ�İ뾶
	double S,P;//S����Բ�������P����Բ���ܳ�
	double pi;//����pi����Բ����

	cin>>r;//�Ӽ�������r��ֵ 
	pi=3.1415926;
	S=pi*r*r;//����Բ����� 
	P=2*pi*r;//����Բ���ܳ� 
	
	
	cout<<fixed<<setprecision(3)<<S<<endl;//��ʽ�����SС���������λ 
	cout<<fixed<<setprecision(3)<<P<<endl;//��ʽ�����PС���������λ 

	
	return 0;
}
