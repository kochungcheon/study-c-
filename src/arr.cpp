#include <iostream>
using namespace std;

int main() {
  const int len = 10;
  int arr[len];
  for (int i=0; i < len; i++) {
    cout << "포인터 연산 사용 주소 " << i;
    cout << arr + i << endl;
    cout << "& 연산자 사용 주소" << i;
    cout << &arr[i] << endl << endl; 
  }

  return 0;
}