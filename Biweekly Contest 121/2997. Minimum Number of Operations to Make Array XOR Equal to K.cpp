#include <bits/stdc++.h>
using namespace std;



int minOperations(vector<int>& nums, int k) {
  vector<int>oneCount(32, 0);
        for (int num : nums)
        {
            for (int i = 0; i < 32; i++)
            {
                if (num & (1 << i))
                    oneCount[i]++;
            }
        }
        

        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            if (k & (1 << i)) 
            {
                if (oneCount[i] % 2 == 0) 
                    ans++;
            }
            else   
            {
                if (oneCount[i] % 2 != 0) 
                    ans++;
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
    /* code */
    cin>>arr[i];
  }
  

  int k;cin>>k;
    
}

