#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double r;//定义r代表圆的半径
	double S,P;//S代表圆的面积、P代表圆的周长
	double pi;//定义pi代表圆周率

	cin>>r;//从键盘输入r的值 
	pi=3.1415926;
	S=pi*r*r;//计算圆的面积 
	P=2*pi*r;//计算圆的周长 
	
	
	cout<<fixed<<setprecision(3)<<S<<endl;//格式化输出S小数点后保留三位 
	cout<<fixed<<setprecision(3)<<P<<endl;//格式化输出P小数点后保留三位 

	
	return 0;
}
