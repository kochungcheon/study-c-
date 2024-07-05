#include <iostream>
using namespace std;

int main() {
  // 변수 선언 및 초기화
  int score = 100;
  int* pScore = &score;
  // 데이터 직접 및 간접 접근
  cout << "직접 접근 : " << score << endl;
  cout << "간접 접근 : " << *pScore << endl;
  cout << "주소 : " << pScore << endl;

  // const
  int age = 30;
  // const 가 없어 값 변경에 자유롭다
  int* pAge = &age;

  const int age1 = 30;
  // int* pAge1 = &age1; 포인터 변수는 상수 주소를 저장할 수 없다
  const int* pAge1 = &age1; // 포인터 변수 이용해 값 변경 하려 할 시 오류 발생
  cout << "변경 전 주소 : "<< pAge1 << endl;
  pAge1++;
  cout << "변경 후 주소 : "<< pAge1 << endl;
  cout << "원본 주소 : "<< &age1 << endl;

  int** ppAge = &pAge;
  cout << "변경 전 ppAge 값 : " << *ppAge << endl; // pAge 값 출력 즉 age 주소
  cout << "변경 전 ppAge 주소 : " << ppAge << endl; // ppAge 가 가리키는 값 출력 즉 pAge 주소
  cout << "변경 전 ppAge 주소 : " << &ppAge << endl; // ppAge 주소 출력
  ppAge = 0;
  // cout << "ppAge 값 : " << *ppAge << endl; 널 포인터
  // cout << "ppAge 주소 : " << ppAge << endl;
  return 0;
}