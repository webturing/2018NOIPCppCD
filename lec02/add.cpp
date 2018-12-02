#include <iostream>
using namespace std;
int main() {
  cout << 3 * 3 << endl;    // ok
  cout << (3 ^ 2) << endl;  // 3^2 is not 3*3
  return 0;
}
