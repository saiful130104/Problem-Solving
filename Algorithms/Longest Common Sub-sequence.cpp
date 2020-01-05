#include<bits/stdc++.h>

using namespace std;

int dp[104][104];

int LCS(string str1, string str2)
{
    int siz1 = str1.size() , siz2 = str2.size();
    for(int i=0; i<=siz1; i++)  dp[i][0]=0;
    for(int i=0; i<=siz1; i++)  dp[0][i]=0;
    for(int i=1; i<=siz2; i++)  /// length of string 2 is indicate the number of row
    {
        for(int j=1; j<= siz1; j++)  /// length of string 1 is indicate the number of column
        {
            if(str1[j-1] == str2[i-1])
                dp[i][j] = dp[i-1][j-1]+1;
            else
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
        }
    }
    return dp[siz2][siz1];
}
void solve()
{
    string str1,str2;
    getline(cin>>ws,str1);
    getline(cin>>ws,str2);
    cout<<LCS(str1,str2)<<endl;
}

int main()
{
    int tst;
    scanf("%d",&tst);
    while(tst--)
        solve();
    return 0;
}
