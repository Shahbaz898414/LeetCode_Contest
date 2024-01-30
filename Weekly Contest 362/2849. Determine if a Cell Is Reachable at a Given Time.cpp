#include<bits/stdc++.h>
using namespace std;


 int Chebyshev(int sx, int sy, int fx, int fy){
        return max(abs(sx-fx), abs(sy-fy) );
    }


    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int d=Chebyshev(sx, sy, fx, fy);
        return d>0 ? t>=d: t!=1;
    }




int main()
{

   
    

    
}


