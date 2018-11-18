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
		for( j=1; j<=i-1; j++)cout<<" "; //打印i-1空格
		for( j=1; j<=n+1-i; j++)cout<<"*"; //打印n+1-i个*
		cout<<endl;//换行
	}
	return 0;
}
