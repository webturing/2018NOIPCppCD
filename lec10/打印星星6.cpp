#include<bits/stdc++.h>
using namespace std;
//*****
// ****
//  ***
//   **
//    *

int main() {
	int n=5,i,j;
	for( i=1; i<=n; i++) {
		for( j=1; j<=i-1; j++)cout<<" "; //��ӡi-1�ո�
		for( j=1; j<=n+1-i; j++)cout<<"*"; //��ӡn+1-i��*
		cout<<endl;//����
	}
	return 0;
}
