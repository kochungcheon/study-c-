#include <iostream>
using namespace std;

void fun();

int main() {
  fun();
  fun();
  fun();
  return 0;
}

void fun() {
  static int cnt = 0;
  cnt++;
  cout << "cout = " << cnt << endl;
}