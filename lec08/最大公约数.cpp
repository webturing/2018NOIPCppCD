#include<bits/stdc++.h>
using namespace std;
///计算a,b的最大公约数 
///尝试在[a+b,1] 降序去找一个因子c 满足a%c==0  && b%c==0
int main() {
	int a,b;cin>>a>>b;
	int i=a+b;
	while(i>=1){
		if(a%i==0&&b%i==0){
			cout<<i<<endl;
			break;
		}
		i--;
	}
	return 0;
}
