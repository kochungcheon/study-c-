#include <iostream>
using namespace std;

int main() {
  int score = 100;
  int& rScore = score;
  int tmp = 50;
  // int& rScore = temp;

  int const score1 = 100;
  int& const rScore1 = score1;
  cout << score1 << endl;

}