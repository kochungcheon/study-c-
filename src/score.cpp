#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
int main() {
  const int num = 3;
  vector<int> scores;
  for (int i=0; i<num; i++) {
    cout << "score " << i << "를 입력해주세요 : ";
    int now;
    if (now < 0 || now > 100) {
      cout << "잘못된 입력입니다 :" << endl;
      break;
    }
    cin >> now;
    scores.push_back(now);
  }
  if (scores.size() == num) {
    int tmpMax = 0;
    int tmpMin = 100;
    for (int i=0; i<num; i++) {
      tmpMax = max(tmpMax, scores[i]);
      tmpMin = min(tmpMin, scores[i]);
    }
    cout << "최고 점수 : " << tmpMax << endl;
    cout << "최저 점수 : " << tmpMin << endl;
  }
  return 0;
}
