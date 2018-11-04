#include<bits/stdc++.h>
using namespace std;
///判断n是否是素数 
///尝试在[2,n-1]之间去找一个因子i 满足n%i==0  
int main() {
	int n;cin>>n;
	int s=0;
	int i=2;
	while(i<=n-1){
		if(n%i==0){
			s=1;
			break;
		}		
		i++;
	}
	if(s==0){
		cout<<"是一个素数"<<endl; 
	}else{
		cout<<"是一个合数"<<endl;
	}
	return 0;
}
