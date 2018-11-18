#include<bits/stdc++.h>
using namespace std;


int main() {
	int a=1800;//头的个数
	int b=3944;//腿的个数
	for(int c=0; c<=a; c++)	
	for(int h=0; h<=a; h++) {
		if(c+h==a&&c*2+h*4==b)
			cout<<c<<" "<<h<<endl;
		}
	return 0;
}
