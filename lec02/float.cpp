#include <iostream>
#include <iomanip>  //��ʽ�����

using namespace std;
int main() {
  double x = 3.5415926;
  cout << fixed << x << endl;
  cout << fixed << setprecision(2) << x << endl;
  return 0;
}
