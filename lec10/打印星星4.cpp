#include<bits/stdc++.h>
using namespace std;
//    *
//   **
//  ***
// ****
//*****
int main() {
	int n=15;
	for(int i=1; i<=n; i++) {
		for(int j=1;j<=n-i;j++)cout<<" ";//��ӡn-i �ո�
		for(int j=1;j<=i;j++)cout<<"*";//��ӡi��*
		cout<<endl;//���� 
	}
	return 0;
}
