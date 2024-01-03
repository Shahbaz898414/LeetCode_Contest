#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;cin>>n;

  int ans1,ans2,ae;

  if(n%10==0){
    return (100-n);
    
  }

  ans1=n%10;
  ans2=n/10;

  int g=10-ans1;

  int f=10-g;

  // cout<<g<<" "<<f<<endl;


  // cout<<100-(n-f)<<endl;
  // cout<<100-(g+n)<<endl;

  if(ans1<5){
    // return max(100-(n-f),100-(g+n));

    cout<<max(100-(n-f),100-(g+n))<<endl; 
  }else {
    cout<<min(100-(n-f),100-(g+n))<<endl;
  }


  // cout<<min(100-(n-f),100-(g+n))<<endl;

  // cout<<ans1<<" "<<ans2<<endl;


}


/*
15 -> 80
11 -> 90

*/