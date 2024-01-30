#include<bits/stdc++.h>
using namespace std;


int numberOfPoints(vector<vector<int>>& nums) {

    int sz=nums.size();

    vector<int> pref(200);

    for(auto it:nums){
        pref[it[0]]+=1;
        pref[it[1]]-=1;
    }

    for(int i=1;i<=pref.size();i++){
        if(i!=0)
            pref[i]+=pref[i-1];
    }


    int zeros = count(pref.begin(), pref.end(), 0);
    return pref.size() - zeros;


}




int main()
{

    int n;cin>>n;

    vector<vector<int>> arr(n,vector<int>(2));

    for(int i=0;i<n;i++){
        for(int j=0;;j<2;j++){
            cin>>arr[i][j];
        }
    }


      cout<<numberOfPoints(arr);  
    

    // cout << numberOfArithmeticSlices(arr);
}


