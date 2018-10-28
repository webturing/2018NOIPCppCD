	#include<bits/stdc++.h>
	using namespace std;
	int main(){
		int i=32;
		while(i<=99){
		    int n=i*i;
		    int a=n/100;
		    int b=n%100;
		    if(a%11==0&&b%11==0){
		        cout<<n<<endl;
		    }
		    i++; 
		}
		
		return 0;
	}
