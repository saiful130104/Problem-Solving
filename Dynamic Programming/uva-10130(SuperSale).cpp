#include<iostream>
#include<cstdio>

using namespace std;
#define N 1001
#define W 31
int dp[N][W],vis[N][W],visVal,weight[N],price[N],cap,n;

int maxProfit(int pos, int w)
{
    int profit;
    if(pos >= n)
        return 0;
    if(vis[pos][w]==visVal)
        return dp[pos][w];
    vis[pos][w]=visVal;
    if(cap<w+weight[pos])
        profit = 0;
    else
        profit = maxProfit(pos+1,w+weight[pos]) + price[pos];
    dp[pos][w] = max(profit,maxProfit(pos+1,w));
    return dp[pos][w];
}

int main()
{
    int tst,m;
    scanf("%d",&tst);
    while(tst--)
    {
        scanf("%d",&n);
        int sum=0;
        for(int i=0; i<n; i++)
            scanf("%d%d",&price[i],&weight[i]);
        scanf("%d",&m);
        int mark[31]={0};
        for(int i=0; i<m; i++)
        {
            scanf("%d",&cap);
            visVal++;
            if(!mark[cap])
                mark[cap]=maxProfit(0,0);
            sum+=mark[cap];
        }
        printf("%d\n",sum);
    }
    return 0;
}
