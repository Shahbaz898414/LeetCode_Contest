#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int n;
  int dp[1003][1003];
  int f(vector<vector<int>> &v, int i, int &time, int t)
  {
    if (i == n)
    {
      return 0;
    }
    if (dp[i][t] != -1)
      return dp[i][t];
    if (t > time)
      return 0;
    int ans = max(f(v, i + 1, time, t), f(v, i + 1, time, t + 1) + v[i][1] + t * v[i][0]);
    return dp[i][t] = ans;
  }

  int minimumTime(vector<int> &a, vector<int> &b, int x)
  {
    n = a.size();
    int ans = 0, suma = 0, sumb = 0;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
      v[i] = {b[i], a[i]};
      suma += a[i];
      sumb += b[i];
    }
    sort(v.begin(), v.end());
    int total = 0;
    for (int i = 0; i < n; i++)
    {
      int xx = n - i - 1;
      total += (xx * v[i][0]);
    }
    if (suma <= x)
      return 0;
    if (total > x)
      return -1;

    int lo = 0, hi = n, mid;
    while (lo <= hi)
    {
      memset(dp, -1, sizeof(dp));
      mid = (lo + hi) / 2;
      int c = f(v, 0, mid, 1);
      int xx = suma + mid * sumb - c;
      // dbggg(mid, xx, c);
      if (xx <= x)
        hi = mid - 1;
      else
        lo = mid + 1;
    }
    return hi + 1;
  }
};

int main()
{

  Solution solution;

  int n;
  cin >> n;

  vector<int> arr1(n);

  vector<int> brr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr1[i];
  }

  for (int i = 0; i < n; i++)
  {

    cin >> brr[i];
  }

  int x;
  cin >> x;

  int result = solution.minimumTime(arr1, brr, x);
  cout << result;
}

/*


class Solution {
public:
    int n;
    int dp[1003][1003];
    int f(vector<vector<int>> &v, int i, int &time, int t){
        if(i == n){
            return 0;
        }
        if(dp[i][t] != -1) return dp[i][t];
        if(t > time) return 0;
        int ans = max(f(v, i+1, time, t), f(v, i+1, time, t+1) + v[i][1] + t*v[i][0]);
        return dp[i][t] = ans;
    }

    int minimumTime(vector<int>& a, vector<int>& b, int x) {
        n = a.size();
        int ans = 0, suma = 0, sumb = 0;
        vector<vector<int>> v(n);
        for(int i = 0; i < n; i++){
            v[i] = {b[i], a[i]};
            suma += a[i];
            sumb += b[i];
        }
        sort(v.begin(), v.end());
        int total = 0;
        for(int i = 0; i < n; i++){
            int xx = n - i - 1;
            total += (xx * v[i][0]);
        }
        if(suma <= x) return 0;
        if(total > x) return -1;

        int lo = 0, hi = n, mid;
        while(lo <= hi){
            memset(dp, -1, sizeof(dp));
            mid = (lo + hi) / 2;
            int c = f(v, 0, mid, 1);
            int xx = suma + mid*sumb - c;
            // dbggg(mid, xx, c);
            if(xx <= x) hi = mid - 1;
            else lo = mid + 1;
        }
        return hi + 1;

    }
};


*/
