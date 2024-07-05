#include <iostream>
using namespace std;

const int len = 3;
void print(int(*)[], int);

int main() {
  int grid[len][len] {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  print(grid, len);
  return 0;
}

void print(int(*m)[len], int rows) {
  for (int i=0; i<len; i++) {
    for (int j=0; j<len; j++) {
      cout << m[i][j] << " ";
    }
    cout << endl;
  } 
}