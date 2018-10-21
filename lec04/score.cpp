#include<iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	if(a<0||a>100)
		cout<<"你在挑逗我么？"<<endl; 
	if(a>=0&&a<=60)
		cout<<"不及格"<<endl;
	if(a>=60&&a<90)
		cout<<"及格"<<endl;
	if(90<=a&&a<=100) 
		cout<<"优秀"<<endl;

}
