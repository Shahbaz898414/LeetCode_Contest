#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;



int countSymmetricIntegers(int low, int high) {

  int count = 0;
  for (int num = low; num <= high; ++num) {
    std::string numStr = std::to_string(num);
    int n = numStr.size();

    if (n % 2 == 0) {
      int sumFirstHalf = 0, sumSecondHalf = 0;

      for (int i = 0; i < n / 2; ++i) {
        sumFirstHalf += numStr[i] - '0';
        sumSecondHalf += numStr[n - 1 - i] - '0';
      }

      if (sumFirstHalf == sumSecondHalf) {
        ++count;
      }
    }
  }

  return count;
}



int main()
{

  long long k;
  int x;
  cin >> k >> x;

  cout << countSymmetricIntegers(k, x) << endl;
}
