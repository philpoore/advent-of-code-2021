#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  while (!cin.eof()) {
    int a;
    cin >> a;
    v.push_back(a);
  }

  int n = v.size();
  vector<int> dp(n + 2, 0);

  for (int i = 0; i < n; i++) {
    dp[i] += v[i];
    dp[i + 1] += v[i];
    dp[i + 2] += v[i];
  }

  int count = 0;
  for (int i = 3; i < n; i++) {
    if (dp[i] > dp[i - 1])
      count++;
  }
  cout << count << "\n";
}