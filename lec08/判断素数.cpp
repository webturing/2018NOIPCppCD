#include<bits/stdc++.h>
using namespace std;
///�ж�n�Ƿ������� 
///������[2,n-1]֮��ȥ��һ������i ����n%i==0  
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
		cout<<"��һ������"<<endl; 
	}else{
		cout<<"��һ������"<<endl;
	}
	return 0;
}
