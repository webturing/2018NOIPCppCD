# lec02: 数据类型和表达式
## 数据类型
- 整型 
    + byte  1字节
    + short 2字节
    + **int   4字节 //重点掌握**
    + long long 8字节
- 浮点型
    + float     4字节
    + **double    8字节 //重点掌握**
    + long double 
- 字符(串)
    + char
    + string   ```#include<string>```
    
## 常变量和表达式  
- 常量
- 变量
    - 定一个变量 ```int x;```
    - 定义同一类型的多个变量: ```int x,y,z;```
- 运算符 
    + 数值运算
        +  加法 +
        +  减法 -
        +  乘法 *
        +  除法 /         //重点掌握
        +  取模（余） %    //重点掌握
    + 赋值运算符 =         //重点掌握


## 格式化输出 ```#include<iomanip>```
- 整数定宽输出
    + 定宽
    + 补齐
- 浮点数输出 //重点掌握
    + 小数精度

      ```C++
      #include<iostream>
      #include<iomanip>
      using namespace std;
      int main(){
          double x=3.1415926;
          cout<<x<<endl;
          cout<<fixed<<setprecision(3)<<endl;
          return 0;
      }
      ```


## 基本的计算程序（没有输入）

- 设a=123,b=456,计算a+b的和 add.cpp
- 设今天是星期二，计算再过100天是星期几week.cpp
- 设圆的半径r=10.5; 计算圆的面积和周长（保留3位小数）circle.cpp