#include <iostream>

using namespace std;

template<class T>
inline T scan() noexcept {
  T t;
  cin >> t;
  return t;
}

inline long long s(long long n) noexcept {
  return n * (n + 1) / 2;
}

int main() {
  int t = scan<int>();
  while (t--) {
    long long n = scan<int>() - 1;
    long long d3 = 3 * s(n / 3);
    long long d5 = 5 * s(n / 5);
    long long d15 = 15 * s(n / 15);
    cout << d3 + d5 - d15 << endl;
  }
}
