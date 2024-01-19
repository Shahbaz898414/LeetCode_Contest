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

/*


void getPatternMatchingIndex(string& s, string& a, vector<int>& v){
    string t = a + "@" + s;
    vector<int> lps(1, 0);
    for(int i = 1; i < t.size(); ++i){
        int ind = lps[i-1];
        while(ind > 0 && t[ind] != t[i]) { ind = lps[ind-1]; }
        lps.push_back((t[ind] == t[i])?ind + 1 : 0);
    }
    for(int i = 0; i < lps.size(); ++i){
        if(lps[i] == a.size()) v.push_back(i - 2*a.size());
    }
}

vector<int> beautifulIndices(string s, string a, string b, int k) {
    vector<int> ans, v1, v2;
    getPatternMatchingIndex(s, a, v1);
    getPatternMatchingIndex(s, b, v2);
    for(int i = 0, j = 0; i < v1.size(); ++i){
        while(j < v2.size() && v1[i] > v2[j] && abs(v1[i] - v2[j]) > k) j++;
        if(j < v2.size() && abs(v1[i] - v2[j]) <= k) ans.push_back(v1[i]);
    }
    return ans;
}



*/




/*



class Solution {
public:

    vector<int> beautifulIndices(string s, string a, string b, int k) {

        vector<int> matchA, matchB;


        for (int i = 0; (i + a.size()) <= s.size(); i++) {
            if (s.substr(i, a.size()) == a) matchA.push_back(i);
        }


        for (int i = 0; (i + b.size()) <= s.size(); i++) {
            if (s.substr(i, b.size()) == b) matchB.push_back(i);
        }


        vector<int> result;


        for (auto& i : matchA) {
            auto it = lower_bound(matchB.begin(), matchB.end(), i - k);
            if ((it != matchB.end()) && (abs(*it - i) <= k)) result.push_back(i);
        }
        return result;


    }
};


*/