#include<bits/stdc++.h>
using namespace std;

int LCSubStr(char* x, char* y, int m, int n)
{

    int LCSuff[m+1][n+1];
    int result=0;

        for(int i=0;i<=m;i++) 
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0||j==0)
                    LCSuff[i][j]=0;
                else if(x[i-1]==y[j-1])
                {

                    LCSuff[i][j]= 1 + LCSuff[i-1][j-1]+1;
                    result = max(result, LCSuff[i][j]);

                }
                else
                    LCSuff[i][j]= 0;
            } 
        }
        return result;
}

int main()
{
    char x[] = "OldSite:GeeksforGeeks.org";
    char y[] = "NewSite:GeeksQuiz.com";

    int m = strlen(x);
    int n = strlen(y);

    cout<< "Length of Longest Common Substring is " << LCSubStr(x, y, m, n);
    return 0;
}
