#include <iostream>
using namespace std;

int main() {
  int size;
  int* pArray;

  do {
    cout << "0보다 큰 배열 크기 입력 : ";
    cin >> size;
  } while (size <= 0); {
    pArray = new int[size];
    for (int i=0; i<size; i++) {
      cout << i << "번째 요소 입력 하세요 ";
      cin >> *(pArray + i);
    }

    cout << "배열 내부 요소 : " << endl;
    for (int i=0; i<size; i++) {
      cout << *(pArray + i) << " ";
    }
    cout << endl;
    delete[] pArray;
  }
  
}