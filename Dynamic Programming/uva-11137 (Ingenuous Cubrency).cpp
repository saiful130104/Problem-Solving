#include<bits/stdc++.h>

using namespace std;
typedef long long int lng;

int coins[22];
lng dp[22][10001];
int vis[22][10001],vis_val;

void init()
{
    for(int i=0; i<22; i++)
        coins[i]=i*i*i;
    return;
}

lng way(int pos, int amount)
{
    if(pos>21)
        return amount==0;
    if(vis[pos][amount]==vis_val)
        return dp[pos][amount];
    vis[pos][amount]=vis_val;
    if(amount>=coins[pos])
        return dp[pos][amount] = way(pos,amount-coins[pos]) + way(pos+1,amount);
    else
        return dp[pos][amount] = way(pos+1,amount);
}
int main()
{
    init();
    int n;
    while(scanf("%d",&n)==1)
    {
        vis_val++;
        printf("%lld\n",way(1,n));
    }
    return 0;
}
