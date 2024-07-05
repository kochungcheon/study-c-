#include <iostream>
using namespace std;

int main() {
  bool flag = true;
  int score = 100;
  double aver = 82.2;
  cout << "불 자료형 변수 " << endl;
  cout << "크기: " << sizeof(flag) << "\t";
  cout << "값: " << flag << "\t";
  cout << "주소: " << &flag << endl << endl;

  cout << "정수 자료형 변수 " << endl;
  cout << "크기: " << sizeof(score) << "\t";
  cout << "값: " << score << "\t";
  cout << "주소: " << &score << endl << endl;

  cout << "double 자료형 변수 " << endl;
  cout << "크기: " << sizeof(aver) << "\t";
  cout << "값: " << aver << "\t";
  cout << "주소: " << &aver << endl << endl;
}