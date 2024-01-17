#include <bits/stdc++.h>
using namespace std;


int maxFrequencyElements(vector<int>& nums) {
   map<int,int> mp;

   for(int i=0;i<nums.size();i++){
    mp[nums[i]]++;
   }     

   int mx=0;

   for(auto it:mp){
    mx=max(mx,it.second);
   }

  int cnt=0;
  for(auto it:mp){
    if(it.second==mx){
      cnt+=it.second;
    }
  }

  return cnt;
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

    cout<<maxFrequencyElements(arr)<<endl;

    
}


