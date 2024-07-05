#include <iostream>
using namespace std;

int getSum(const int*, int);

int main() {
  const int len = 5;
  int arr[len] = {10, 11, 12, 13};
  cout << "요소의 합 : " << getSum(arr, len);
  return 0;
}

int getSum(const int*p, int size) {
  int sum = 0;
  for (int i=0; i<size; i++) {
    sum += *(p++);
  }
  return sum;
}