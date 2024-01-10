#include <bits/stdc++.h>
using namespace std;


  int solve(int x, int &y, vector<int> &dp) {
        if (x < y) return (y - x);

        if (x == y) return 0;

        if (dp[x] != -1) return dp[x];

        int opt1 = 1e9;
        if ((x % 11) == 0) {
            opt1 = 1 + solve(x / 11, y, dp);
        } else {
            int opt1_1 = 1 + (x % 11) + solve(x / 11, y, dp);
            int opt1_2 = 1 + (11 - (x % 11)) + solve((x / 11) + 1, y, dp);
            opt1 = min(opt1_1, opt1_2);
        }

        int opt2 = 1e9;

        if ((x % 5) == 0) {
            opt2 = 1 + solve(x / 5, y, dp);
        }else {
            int opt2_1 = 1 + (x % 5) + solve(x / 5, y, dp);
            int opt2_2 = (5 - (x % 5)) + solve((x / 5) + 1, y, dp) + 1;
            opt2 = min(opt2_1, opt2_2);
        }

        int opt3 = 1e9;
        opt3 = 1 + solve(x - 1, y, dp);

        return dp[x] = min({opt1, opt2, opt3});
  }

int minimumOperationsToMakeEqual(int x, int y) {
        vector<int> dp(1e4 + 1, -1);
        return solve(x, y, dp);
    }


int main()
{

  int x,y;cin>>x>>y;

  cout<<minimumOperationsToMakeEqual(x,y)<<endl;

}




