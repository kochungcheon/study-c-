#include <iostream>
using namespace std;

int num = 5;
void print(int, int);

int main() {
  int num =12;
  cout << "전역 변수 : " << ::num << endl;
  cout << "지역 변수 : " << num << endl;
  print(num, ::num);
  return 0;
}

void print(int x, int y) {
  cout << "입력 값은 x = " << x << " y = " << y << endl;
}