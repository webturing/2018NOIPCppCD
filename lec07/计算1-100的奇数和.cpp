#include<bits/stdc++.h>
using namespace std;
int main(){
	int s=0;
	int i=1;
	while(i<=100){
		if(i%2==1)
			s+=i;
		i++;
	}
	cout<<s;
	return 0;
}
