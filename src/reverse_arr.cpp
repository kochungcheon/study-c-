#include <iostream>
using namespace std;

void reverse(int*, int);

int main() {
  const int len = 5;
  int arr[len] = {1, 2, 3, 4, 5};
  reverse(arr, len);
  for (int i=0; i<len; i++) {
    cout << *(arr + i) << " ";
  } 
  return 0;
}

void reverse(int* pArr, int size) {
  int s = 0;
  int e = size - 1;

  while (s <= e) {
    int tmp = *(pArr + s);
    *(pArr + s) = *(pArr + e);
    *(pArr + e) = tmp;
    s++;
    e--;
  }
}