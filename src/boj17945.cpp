#include <iostream>

using namespace std;

int main() {
  int a;
  int b;
  cin >> a >> b; 
  for (int i=-1001; i<=1000; i++) {
    if (i * i + 2 * i * a + b == 0) {
      cout << "test" << endl;
      cout << i << " ";
    }
  }
  int test = 2 * 2 + 1;
  cout << test << endl;
  return 0;
}