#include<bits/stdc++.h>
using namespace std;

int main() {
	for(int x=0; x<=100; x++)
		for(int y=0; y<=100; y++)
			for(int z=0; z<=100; z++) {
				if(x+y+z==100&&5*x+3*y+z/3==100&&z%3==0)
				cout<<x<<" "<<y<<" "<<z<<endl;
			}
	return 0;
}
