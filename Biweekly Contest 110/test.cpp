#include <bits/stdc++.h>
using namespace std;


int lengthOfLIS(vector<int>& nums) {

  int n=nums.size();

  vector<int>  dp(n,1);

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if(dp[j]<dp[i]){
        dp[i]=max(dp[j]+1,dp[i]);
      }
    }
  }

  for(auto it:dp){
    cout<<it<<" ";
  }

  cout<<endl;

  int maxLength = *max_element(dp.begin(), dp.end());


  return maxLength;
  

}


int main(){
 
  int n;cin>>n;

  vector<int>  arr(n);


  for (int i = 0; i < n; i++)
  {
    /* code */
    cin>>arr[i];
  }

  cout<<lengthOfLIS(arr);
  

}

