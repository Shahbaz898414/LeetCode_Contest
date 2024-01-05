#include <bits/stdc++.h>
using namespace std;



int minimumSeconds1(vector<int> &nums) {
  vector<int> v;
  unordered_map<int, int> map;

  // to remove circular property repeat the same vector 2 times
  for (auto i : nums)
  {
    v.push_back(i);
  }

  // for(auto it:nums){
  //   cout<<it<<" ";
  // }

  // cout<<endl;
  for (auto i : nums)
  {
    // cout<<i<<" ";
    v.push_back(i);
  }

  // for(auto it:nums){
  //   cout<<it<<" ";
  // }

  // cout<<endl;

  unordered_map<int, int> um;

  for (int i = 0; i < v.size(); i++)
  {
    if (map.count(v[i]))
    {
      um[v[i]] = (max(um[v[i]], i - map[v[i]] + 1));
      map[v[i]] = i;
    }
    else
    {
      map[v[i]] = i;
    }
  }

  int ans = 1e9;
  for (auto it : um)
  {
    ans = min(ans, it.second);
  }
  ans -= 2;
  return (ans / 2 + ans % 2);

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int minimumSeconds(vector<int> &nums) {


  unordered_map<int, vector<int>> m;
  int k = nums.size();
  for (int i = 0; i < nums.size(); i++)
  {
    m[nums[i]].push_back(i);
  }
  for (auto &a : m)
  {
    sort(a.second.begin(), a.second.end());
  }

  // for(auto it:m){
  //   cout<<it.first<<endl;
  //   for(auto i:it.second){
  //     cout<<i+1<<" ";
  //   }
  //   cout<<endl;
  // }

  // cout<<endl;

  int res = INT_MAX;

  // cout<<1<<endl;

  for (auto &a : m)
  {


    int sz = a.second.size();


   


    int ans = ((k - a.second.back() - 1 + a.second[0]) / 2) + ((k - a.second.back() - 1 + a.second[0]) % 2);


    for (int i = 1; i < sz; i++) {


      ans = max(ans, ((a.second[i] - a.second[i - 1] - 1) / 2) + ((a.second[i] - a.second[i - 1] + 1) % 2));


    }


    res = min(res, ans);


  }


  return res;


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

  

  cout << minimumSeconds(arr);


}

