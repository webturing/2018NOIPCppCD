#include<iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	if(a<0||a>100)
		cout<<"����������ô��"<<endl; 
	if(a>=0&&a<=60)
		cout<<"������"<<endl;
	if(a>=60&&a<90)
		cout<<"����"<<endl;
	if(90<=a&&a<=100) 
		cout<<"����"<<endl;

}
