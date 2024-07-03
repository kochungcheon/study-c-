#include <iostream>
#include <limits>
#include <string>

/*
주석
*/
using namespace std;
int main() {
  int num1;
  const double PI = 3.14;
  const unsigned int penny = 1;
  
  cout << "숫자 입력 : ";
  string name = "이름";
  cin >> num1;

  cout << name << endl;
  
  
  cout << num1 << endl;
  cout << "프로젝트 구조 파악" << endl;
  cout << sizeof(int) << " int 사이즈" << endl;
  cout << sizeof(long) << " long 사이즈" << endl;

  int cast_num = 1;
  cout << "캐스팅 " << static_cast<int>(1 + 1.1) << endl;

  char first = 'A';
  char second = 65;
  cout << first << second << endl;

  unsigned int num3 = numeric_limits<unsigned int>::max();
  cout << "오버 플로우 : " << num3 + 1 << endl;
  return 0;
}