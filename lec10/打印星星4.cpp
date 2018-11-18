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
		for(int j=1;j<=n-i;j++)cout<<" ";//打印n-i 空格
		for(int j=1;j<=i;j++)cout<<"*";//打印i个*
		cout<<endl;//换行 
	}
	return 0;
}
