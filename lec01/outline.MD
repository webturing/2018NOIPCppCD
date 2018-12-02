# C++ 第一讲 C++入门
## 开发环境 IDE DevC++: 第一个程序框架

   ```C++
   int main() 
   { 
   	return 0; 
   }
   ```

## 输出程序

   ```C++
   #include <iostream>
   using namespace std;
   int main() 
   {
     cout << "hello world";
     return 0
   }
   
   ```

## 简单计算程序

   ```C++
   #include <iostream>
   using namespace std;
   int main() {
     cout << 13 + 4;
     cout << "\n";
     cout << 13 - 4;
     cout << "\n";
     cout << 13 * 4;
     cout << "\n";
     cout << 13 / 4 << "\n";
     cout << 15 / 4;
     return 0;
   }
   
   ```

## 表达式和运算符//表达式的运算规则

   - 求和 +

   - 求差-

   - 求积*

   - 求商/

   - 求余数%

     ```C++
     #include <iostream>
     using namespace std;
     int main() {
       cout << 13 / 7 << endl;
       cout << 13 % 7 << endl;
       return 0;
     }
     ```

## 词汇
- 开发 develop
- 返回 return 
- 包含 include
- 使用 using
- 在。。之前 before
- 期待expect

## 程序术语：
 -  main C++程序入口
 -  iostream 输入输出流
 -  cout 标准输出一般指屏幕终端
 -  endl="\n" 回车符号