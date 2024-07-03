#include <iostream>
using namespace std;

class Rectangle {
  private:
    int length;
    int height;
    static int cnt;
  public:
    Rectangle(int length, int height);
    Rectangle();
    ~Rectangle();
    Rectangle(const Rectangle& rect);
    static int getCount();   
};

// 정적 데이터 멤버 초기화
int Rectangle::cnt = 0;

Rectangle::Rectangle(int len, int hgt) : length(len), height(hgt) {
  cnt++;
}

Rectangle::Rectangle() : length(0), height(0) {
  cnt++;
}

Rectangle::Rectangle(const Rectangle& rect) : length(rect.length), height(rect.height) {
  cnt++;
}

Rectangle::~Rectangle() {
  cnt--;
}

int Rectangle::getCount() {
  return cnt;
}

int main() {
  {
    Rectangle rect1(1, 1);
    Rectangle rect2;
    Rectangle rect3(rect1);
    Rectangle rect4(rect2);
    cout << "객체의 수 : " << rect4.getCount() << endl;
  }
  cout << " 객체의 수 : " << Rectangle::getCount() << endl;
}