#include <bits/stdc++.h>
using namespace std;

int missingInteger(vector<int>& nums) {
        int countSum = nums[0];
        for(int i =1; i<nums.size();i++){
            if(nums[i-1]+1 == nums[i]) countSum += nums[i];
            else break;
        }

        // cout<<countSum<<" countSum"<<endl;
        sort(nums.begin(),nums.end());
        for(int i = 0; i< nums.size(); i++){
            if(countSum == nums[i]){
              // cout<<i<<" ";
                countSum++;
            }
        }

        // cout<<endl;

        
        return countSum;


        // 1 3 4 5 12 13 14
        
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

    cout<<missingInteger(arr)<<endl;

    
}




