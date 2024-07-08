#include <iostream>

using namespace std;

int main() {
  int test = 1;
  int* pTest = &test;
 
 // delete pTest; 힙에 있는 데이터만 지울 수 있다 런타임에러 뜬다
  int* pY = new int;
  *pY = 10;
  cout << *pY << endl;
  delete pY;
  cout << *pY << endl;

  *pY = 6; // 이렇게 해선 곤란
  cout << *pY << endl;


  // delete pY;
  pY = nullptr; // 해제된 메모리에 접근 못하게 하자
  // *pY = 10;
  // cout << *pY << endl;
  return 0;
}