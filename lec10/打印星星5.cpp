#include<bits/stdc++.h>
using namespace std;
//*****
// ****
//  ***
//   **
//    *

int main() {
	int n=15;
	for(int i=1; i<=n; i++) {
		for(int j=1;j<=i-1;j++)cout<<" ";//��ӡ �ո�
		for(int j=1;j<=n+1-i;j++)cout<<"*";//��ӡ ��*
		cout<<endl;//���� 
	}
	return 0;
}
