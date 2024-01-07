#include <bits/stdc++.h>
using namespace std;



int numberOfArithmeticSlices(vector<int> &nums)
{
    int n = nums.size();
    if (n <= 2) return 0;

    map<long long, int> dp[n + 1];
    long long ans = 0;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++){
        
            long long cnt = 1;

            long long diff=(long long)nums[i] - (long long)nums[j];

            if (dp[j].count(diff)) {
                cnt = dp[j][diff];
                dp[i][diff] += cnt;
                ans += cnt;
            }


            dp[i][diff] += 1;

            cout<<i+1<<" "<<j+1<<" "<<diff<<endl;
        }


        cout<<endl;


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



