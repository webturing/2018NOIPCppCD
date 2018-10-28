#include<bits/stdc++.h>
using namespace std;
int main(){
	int s=0;
	int i=1;
	while(i<=1000){		
		if(i%3==0&&i%5==0)
			s++;
		i++;
	}
	cout<<s;
	return 0;
}
