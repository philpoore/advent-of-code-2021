#include <iostream>

using namespace std;

int main() {
  int prev = INT32_MIN;
  int count = 0;
  while (!cin.eof()) {
    int a;
    cin >> a;
    if (prev != INT32_MIN && a > prev)
      count++;
    prev = a;
  }

  cout << count << "\n";
}