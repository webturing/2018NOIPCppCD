#include<bits/stdc++.h>
using namespace std;
///����a,b�����Լ�� 
///������[a+b,1] ����ȥ��һ������c ����a%c==0  && b%c==0
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
