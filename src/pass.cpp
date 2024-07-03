#include <iostream>

using namespace std;

// pass by value 는 값을 복사하기 때문에 느리다
void fun(int y) {
    y++;
    cout << "fun 함수 내부의 y = " << y << endl;
    return;
}

void fun1(int& x) {
  x++;
  cout << "fun1 함수 내부의 x = " << x << endl;
  return;
}

int main() {
  int y;
  cout << "입력 값 y = ";
  cin >> y;
  fun(y);
  cout << "main 내부의 y = " << y << endl;
  int x;
  cout << "입력 값 x = ";
  cin >> x;
  fun1(x);
  cout << "main 내부의 x = " << x << endl;
}