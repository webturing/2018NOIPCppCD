#include<iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	if(a<0||a>100)
		cout<<"你在挑逗我么？"<<endl;
	else if(a<60)
		cout<<"不及格"<<endl;
	else if(a<90)
		cout<<"及格"<<endl;
	else
		cout<<"优秀"<<endl;


}
