#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


    
    int countOps(string s, string lastTwoDigs) {
        int indx = s.size() - 1;
        bool zeroExist = false;
        if(s.find('0') != string::npos)zeroExist = true;
        while(indx >= 0 and s[indx] != lastTwoDigs[1]) indx -= 1;
        if(indx == -1) return s.size() - ((zeroExist) ? 1 : 0);
        indx--;
        while(indx >= 0 and s[indx] != lastTwoDigs[0]) indx -= 1;
        if(indx == -1) return s.size() - ((zeroExist) ? 1 : 0);
        return (s.size() - 1 - indx) - 1;//substracting one for lastTwoDigs[0]
    }

    int minimumOperations(string num) {
        return min(min(countOps(num, "00"), countOps(num, "25")), min(countOps(num, "50"), countOps(num, "75")));
    }



int main()
{

  string s;cin>>s;

//   cout<<minOperationsToSpecial(s)<<endl;

}





/*


Today was my 15th day out of the 75 days hard challenge.
So today. I solved 5 question.

1. B - Swap and Delete (https://codeforces.com/contest/1913/problem/B)

2. 232. Implement Queue using Stacks (https://lnkd.in/d-3AqGqt).

3. D - Three Activities (https://lnkd.in/dUKZ74QJ).

4. E2 - Game with Marbles (Hard Version) (https://lnkd.in/dSW2cJnk).

5. C. Closest Cities (https://lnkd.in/daQT-FSj).


*/