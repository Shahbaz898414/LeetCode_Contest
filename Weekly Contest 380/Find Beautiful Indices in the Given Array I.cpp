#include <bits/stdc++.h>
using namespace std;

vector<int> beautifulIndices(string s, string a, string b, int k)
{
  vector<int> matchA, matchB;
  for (int i = 0; (i + a.size()) <= s.size(); i++)
  {
    if (s.substr(i, a.size()) == a)
      matchA.push_back(i);
  }
  for (int i = 0; (i + b.size()) <= s.size(); i++)
  {
    if (s.substr(i, b.size()) == b)
      matchB.push_back(i);
  }

  for (auto it : matchA)
  {
    cout << it << " ";
  }

  cout << endl<<endl;

  for (auto it : matchB)
  {
    cout << it << " ";
  }

  cout << endl<<endl;

  vector<int> ans;

  for (auto &i : matchA)
  {

    cout<<i-k<<" ";
    auto it = lower_bound(matchB.begin(), matchB.end(), i - k);
    // cout<<it<<" ";
    if ((it != matchB.end()) && (abs(*it - i) <= k))
      ans.push_back(i);
  }

  cout<<endl<<endl;

  return ans;



}

int main()
{

  string s, a, b;
  cin >> s >> a >> b;

  int k;
  cin >> k;

  vector<int> v = beautifulIndices(s, a, b, k);

  for(auto it:v){
    cout<<it<<" ";
  }
}

