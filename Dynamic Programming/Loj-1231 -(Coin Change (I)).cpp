#include<bits/stdc++.h>
#define mod 100000007

using namespace std;

typedef long long int lng;

int coinVal[51],coinNum[51],visVal,vis[51][1001],coins;
lng dp[51][1001];

lng way(int pos, int amount)
{
    if(!amount)
        return 1;
    if(pos>=coins)
        return 0;
    if(vis[pos][amount]==visVal)
        return dp[pos][amount];
    vis[pos][amount] = visVal;
    lng res = 0;
    for(int i=0; i<=coinNum[pos]; i++)
    {
        if((amount-i*coinVal[pos])>=0)
            res = (res+way(pos+1,amount-i*coinVal[pos]))%mod;
        else
            break;
    }
    return dp[pos][amount] = res;
}
int main()
{
    int tst,make,cs=1;
    scanf("%d",&tst);
    while(tst--)
    {
        visVal++;
        scanf("%d%d",&coins,&make);
        for(int i=0; i<coins; i++)
            scanf("%d",coinVal+i);
        for(int i=0; i<coins; i++)
            scanf("%d",coinNum+i);
        printf("Case %d: %lld\n",cs++,way(0,make)%mod);
    }
    return 0;
}
