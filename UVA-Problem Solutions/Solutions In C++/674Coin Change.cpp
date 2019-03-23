#include <bits/stdc++.h>

using namespace std;
int coin[5] = {1,5,10,25,50},dp[6][7490],make;
bool vis[6][7490];

int coin_change(int i, int amount)
{
    int ret1=0,ret2=0;
    if(i>=5)
    {
        if(amount==0) return 1;
        else return 0;
    }
    if(vis[i][amount]) return dp[i][amount];
    vis[i][amount] = 1;
    if(amount - coin[i]>=0) ret1=coin_change(i,amount-coin[i]);
    ret2 = coin_change(i+1,amount);
    dp[i][amount] = ret1+ret2;
    return dp[i][amount];
}
int main()
{
    while(scanf("%d",&make)!=EOF)
    {
        //memset(vis,0,sizeof(vis));
        printf("%d\n",coin_change(0,make));
    }
    return 0;
}
