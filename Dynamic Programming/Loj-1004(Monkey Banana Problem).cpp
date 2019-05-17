#include<bits/stdc++.h>

using namespace std;
int dp[203][103],vis[203][103],visVal=1,node[203][103],n,sum;

bool valid(int row, int col)
{
    if(row>2*n-1 || col>n || col<1 || (row>n && col>(2*n-row)))
        return 0;
    return 1;
}

int value(int row, int col)
{
    if(valid(row,col))
    {
        if(vis[row][col]==visVal)
            return dp[row][col];
        int tVal = value(row+1,col);
        vis[row][col] = visVal;
        if(row<n)
            dp[row][col] = max(tVal, value(row+1,col+1)) + node[row][col];
        else
            dp[row][col] = max(tVal, value(row+1,col-1)) + node[row][col];
    }
    else
        return 0;
    return dp[row][col];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tst,cs=1;
    cin>>tst;
    while(tst--)
    {
        visVal++;
        cin>>n;
        for(int i=1; i<=n;i++)
            for(int j=1; j<=i; j++)
                cin>>node[i][j];
        for(int i=n+1; i<=2*n-1;i++)
            for(int j=1; j<=2*n-i; j++)
                cin>>node[i][j];

        printf("Case %d: %d\n",cs++,value(1,1));
    }
    return 0;
}
