#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

void sumSubarrayMins(vector<int>& arr) {
  int n = arr.size();
        vector<int> leftOptions;
        vector<int> rightOptions;
        stack<pair<int, int>> st,sta;

        

        for(int i = 0; i < arr.size(); i++) {
            while(!st.empty() && st.top().first >= arr[i]) {
                st.pop();
                sta.pop();
            }
            leftOptions.push_back((st.empty() 
                ? i + 1 
                : i - st.top().second)
            );
            st.push({arr[i], i});
            sta.push({arr[i], i});
        }
        cout<<"left"<<endl;
        for(auto it :leftOptions){
          cout<<it<<" ";
        }
        cout<<endl;
        cout<<endl;
        cout<<"stack"<<endl;
        while(!sta.empty()){
          cout<<sta.top().first<<" "<<sta.top().second<<endl;
          sta.pop();
        }

        cout<<endl;
        cout<<endl;


        

        while(!st.empty()) st.pop();
        while(!sta.empty()) sta.pop();

        cout<<"right for loop"<<endl;

        // cout<<1<<endl;
        // cout<<1<<endl;
        // cout<<1<<endl;
        // cout<<1<<endl;

        for(int i = arr.size() - 1; i >= 0; i--) {
          // cout<<i<<endl;
            while(!st.empty() && st.top().first > arr[i]) {
                st.pop();
                sta.pop();
            }

            // cout<<i<<endl;

            // cout  << ", st.top().second = " << st.top().second << endl;

            cout<<i<<endl;

              //  printf("Number: %d, Message: %s\n", i, st.top().second);
            rightOptions.push_back((st.empty() 
                ? n - i 
                : st.top().second - i)
            );
            st.push({arr[i], i});
            sta.push({arr[i], i});
        }

        cout<<"chatGPT"<<endl;

        cout<<endl;



        cout<<"right"<<endl;
        for(auto it :rightOptions){
          cout<<it<<" ";
        }
        cout<<endl;
        cout<<endl;
        cout<<"stack"<<endl;
        while(!sta.empty()){
          cout<<sta.top().first<<" "<<sta.top().second<<endl;
          sta.pop();
        }

        cout<<endl;
        cout<<endl;


        reverse(rightOptions.begin(), rightOptions.end());
      
      
        long long res = 0;


        for(int i = 0; i < arr.size(); i++) {
            long long curr = 
                (1ll * leftOptions[i] * rightOptions[i] * arr[i]) % mod;
            res = (res + curr) % mod;
        }


        // return res;        
}



int main()
{

 int n;cin>>n;

 vector<int> arr(n);

 for (int i = 0; i < n; i++)
 {
  /* code */
  cin>>arr[i];
 }

 sumSubarrayMins(arr);
//  cout<<sumSubarrayMins(arr)<<endl;
 
  
}




/*

class Solution {
public:
   const int MOD = 1000000007;

int sumSubarrayMins(std::vector<int>& arr) {
    int n = arr.size();
    std::stack<int> s1, s2;
    std::vector<long long> left(n), right(n, n);

    // Calculate left boundaries
    for (int i = 0; i < n; ++i) {
        while (!s1.empty() && arr[s1.top()] > arr[i]) {
            s1.pop();
        }
        left[i] = s1.empty() ? i + 1 : i - s1.top();
        s1.push(i);
    }

    // Calculate right boundaries
    for (int i = n - 1; i >= 0; --i) {
        while (!s2.empty() && arr[s2.top()] >= arr[i]) {
            s2.pop();
        }
        right[i] = s2.empty() ? n - i : s2.top() - i;
        s2.push(i);
    }

    // Calculate the final sum
    long long result = 0;
    for (int i = 0; i < n; ++i) {
        result = (result + arr[i] * left[i] * right[i]) % MOD;
    }

    return static_cast<int>(result);
}

};


*/


/*

class Solution {
public:
    static const int MOD = 1'000'000'007;

    int sumSubarrayMins(vector<int>& arr) {
        long sumOfMin = 0;

        for (int i = 0; i < arr.size(); i++) {
            sumOfMin = (sumOfMin + findSubArrayMin(arr, i)) % MOD;
        }
        return static_cast<int>(sumOfMin);
    }

    static int findSubArrayMin(const vector<int>& arr, int start) {
        int minVal = arr[start];
        int result = 0;

        for (int i = start; i < arr.size(); i++) {
            minVal = min(minVal, arr[i]);
            result += minVal;
        }
        return result;
    }
};

*/


/*

Today was my 5th day out of the 75 days  hard challenge.
So today. I solved 5 question.


1. 907. Sum of Subarray Minimums (https://leetcode.com/problems/sum-of-subarray-minimums/description/?envType=daily-question&envId=2024-01-20).

2. 2855. Minimum Right Shifts to Sort the Array (https://leetcode.com/problems/minimum-right-shifts-to-sort-the-array/).

3. 2856. Minimum Array Length After Pair Removals (https://leetcode.com/contest/biweekly-contest-113/problems/minimum-array-length-after-pair-removals/)

4. 2857. Count Pairs of Points With Distance k (https://leetcode.com/contest/biweekly-contest-113/problems/count-pairs-of-points-with-distance-k/).

5. A. Satisfying Constraints (https://codeforces.com/contest/1920/problem/A).


*/


/*

int mod = 1e9 + 7;

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> leftOptions;
        vector<int> rightOptions;
        stack<pair<int, int>> st;

        for(int i = 0; i < arr.size(); i++) {
            while(!st.empty() && st.top().first >= arr[i]) {
                st.pop();
            }
            leftOptions.push_back((st.empty() 
                ? i + 1 
                : i - st.top().second)
            );
            st.push({arr[i], i});
        }

        while(!st.empty()) st.pop();

        for(int i = arr.size() - 1; i >= 0; i--) {
            while(!st.empty() && st.top().first > arr[i]) {
                st.pop();
            }
            rightOptions.push_back((st.empty() 
                ? n - i 
                : st.top().second - i)
            );
            st.push({arr[i], i});
        }
        reverse(rightOptions.begin(), rightOptions.end());
      
        long long res = 0;
        for(int i = 0; i < arr.size(); i++) {
            long long curr = 
                (1ll * leftOptions[i] * rightOptions[i] * arr[i]) % mod;
            res = (res + curr) % mod;
        }


        return (int)res;

        
    }
};


*/