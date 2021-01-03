#include <iostream>

#include <vector>

#include <iomanip>

using std::cout, std::cin, std::endl;
int main(void) {
  const int coins[11] = {
    5,
    10,
    20,
    50,
    100,
    200,
    500,
    1000,
    2000,
    5000,
    10000
  };
  double money;
  int num = 0;
  while (cin >> money) {
    num = money * 100 + 0.5;
    std::vector < long long > ans(num + 1, 0);
    ans[0] = 1;
    if (money == 0) break;
    for (int i = 0; i < 11; i++) {
      for (int j = 0; j <= num - coins[i]; j++) {
        ans[j + coins[i]] = ans[j + coins[i]] + ans[j];
      }
    }
    cout << std:: setw(6) << std:: setprecision(2) << std:: fixed << money <<std:: setw(17) << ans[num] << endl;
  }
  return 0;
}