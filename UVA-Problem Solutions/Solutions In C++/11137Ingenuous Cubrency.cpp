#include <bits/stdc++.h>
#define get(x) scanf("%d",&x)
#define put(x) printf("%lld\n",x);

using namespace std;
typedef long long lng;

int coins[23];
lng dp[23][10002],make;
bool vis[23][10002];

lng way(int amount, int i)
{
    if(i==21)
    {
        if(amount==0) return 1;
        return 0;
    }
    if(vis[i][amount]) return dp[i][amount];
    vis[i][amount] = 1;
    lng ret1=0,ret2=0;
    if(amount - coins[i]>=0) ret1 = way(amount-coins[i],i);
    ret2 = way(amount,i+1);
    dp[i][amount] =  ret1+ret2;
    return dp[i][amount];
}
int main()
{
    for(int i=1,j=0; i<=21; i++,j++) coins[j]=i*i*i;
    while(get(make)!=EOF)
    {
        put(way(make,0));
    }
    return 0;
}
