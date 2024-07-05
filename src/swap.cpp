#include <iostream>
using namespace std;
void swap(int* A, int* B);

int main() {
  int a = 1234;
  int b = 5678;
  cout << a << " " << b << endl;
  swap(&a, &b);
  cout << a << " " << b << endl;
  return 0;
}

void swap(int* pA, int* pB) {
    cout << pA << " " << pB << endl;
    int tmp = *pA;
    *pA = *pB;
    *pB = tmp; 
}