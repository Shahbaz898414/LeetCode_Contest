#include <bits/stdc++.h>
using namespace std;


int lengthOfLIS1(vector<int>& nums) {
    std::vector<int> tails(nums.size(), 0);
    int size = 0;

    for (int x : nums) {
      int i = 0, j = size;
      while (i != j) {
                int m = (i + j) / 2;
                if (tails[m] < x)
                    i = m + 1;
                else
                    j = m;
      }
            tails[i] = x;
            if (i == size) ++size;
    
    }


    return size;
}




int lengthOfLIS(vector<int> &nums) {

  int n = nums.size();

  vector<int> dp(n, 1);


  for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (nums[j] < nums[i])
        dp[i] = max(dp[j] + 1, dp[i]);
      
    }
  }



  // for (auto it : dp)
  //   cout << it << " ";
  

  // cout << endl;

  int maxLength = *max_element(dp.begin(), dp.end());

  return maxLength;


}




int main()
{

  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    /* code */
    cin >> arr[i];
  }

  cout << lengthOfLIS1(arr);
}



