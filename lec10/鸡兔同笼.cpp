#include<bits/stdc++.h>
using namespace std;


int main() {
	int a=1800;//ͷ�ĸ���
	int b=3944;//�ȵĸ���
	for(int c=0; c<=a; c++)	
	for(int h=0; h<=a; h++) {
		if(c+h==a&&c*2+h*4==b)
			cout<<c<<" "<<h<<endl;
		}
	return 0;
}
