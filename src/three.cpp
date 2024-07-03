#include <iostream>

using namespace std;
int main() {
  double d;
  cin >> d;

  int right;
  double left;

  right = static_cast<int>(d);
  left = d - right;

  cout << "원래 값 : " << d << endl;
  cout << "정수 부 : " << right << endl;
  cout << "소수 부 : " << left << endl;

  int i;
  cin >> i;
  cout << "원래 값 : " << i << endl;
  cout << "첫째 자리 값 : " << i % 10 << endl;
  return 0;
}