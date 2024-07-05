#include <iostream>
using namespace std;

class Fraction {
  private:
    int first;
    int second;
  public:
    Fraction(int fir, int sec): first(fir), second(sec) {}
    ~Fraction() {};
    void print() const {
      cout << first << " " << second << endl;
    }
};

Fraction& larger(Fraction& fraction1, Fraction& fract2) {
  return fraction1;
}

int main() {
  Fraction fract1(10, 13);
  Fraction fract2(20, 30);
  larger(fract1, fract2).print();
  return 0;
}