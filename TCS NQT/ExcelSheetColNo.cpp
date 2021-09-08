#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int titleToNumber(string s) {
            int ans = 0;
            int pow = 1;
            int n =  s.size();

            for(int i=n-1; i>=0; i--){
                ans = ans + (s[i]-64)*pow;
                pow = pow*26;
            }
            return ans;
        }
}