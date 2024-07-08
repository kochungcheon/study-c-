#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
  char str[] = {'A', 'B'};
  char str1[] = "ABC";
  char* p = str;
  // cout << *p << endl;
  const char str3[] = {'A', '\0'};
  const char str2[] = "ABC";
  const char* str4 = "Hello";
  cout << str4 << endl;
  // char* str5 = "Hello"; 문자열 리터럴은 상수 포인터에만 할당가능 포인터를 통해 문자열을 불변성 해치는 것을 막기 위해

  char* str5 = new char[3];
  delete[] str5; // 파괴

  char str6[] = "Hi qwer";
  char str7[] = "copy str6 ";
  
  strcpy(str7, str6);
  str7[1] = 'q';
  cout << "str7 : " << str7 << endl;
  cout << "str7 len : " << strlen(str7) << endl;
  cout << strpbrk(str7, "s") << endl;

  string a; // 힙에 생성됩니다
  cin >> a;
  int len = a.size(); // 한글 같은 멀티 바이트 문자는 size 쓰면 곤란. 한 글자가 1 바이트가 아닐 수 있다
  if (len >= 2) {
    cout << a[1] << endl;
  } else {
    a.push_back('a');
  }

}