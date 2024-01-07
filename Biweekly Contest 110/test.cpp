#include <bits/stdc++.h>
using namespace std;

int numberOfArithmeticSlices(vector<int> &nums)
{

    int n = nums.size();

    if (n <= 2)
        return 0;

    map<long long, int> dp[n + 1];

    long long ans = 0;

    for (int i = 1; i < n; i++)
    {
        
        for (int j = 0; j < i; j++)
        {
            
            long long cnt = 1;

            long long diff = (long long)nums[i] - (long long)nums[j];

            if (dp[j].count(diff))
            {
                cnt = dp[j][diff];
                dp[i][diff] += cnt;
                ans += cnt;
            }

            dp[i][diff] += 1 ;
        }
    }

 


    return ans;
}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        
        cin >> arr[i];
    }

   cout<<numberOfArithmeticSlices(arr);
}



/*



class Solution {
public:
    int numberOfArithmeticSlices(std::vector<int>& nums) {
        int n = nums.size();
        int totalCount = 0;

        // dp[i][d] represents the number of arithmetic subsequences ending at index i with common difference d
        std::vector<std::unordered_map<long long, int>> dp(n);

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                long long diff = (long long)nums[i] - nums[j];

                // Check for possible integer overflow
                if (diff < INT_MIN || diff > INT_MAX)
                    continue;

                int count = dp[j].count(diff) ? dp[j][diff] : 0;

                // Add the count to the total and update dp[i][diff]
                totalCount += count;
                dp[i][diff] += count + 1;
            }
        }

        return totalCount;
    }
};


*/