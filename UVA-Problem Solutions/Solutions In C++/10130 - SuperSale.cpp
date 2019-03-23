#include <bits/stdc++.h>
#define max_n 1001
#define max_w 1010

using namespace std;
typedef long long lng;

int n,weight[max_w],cost[max_n],dp[max_n][31],cap;
bool vis[max_n][31];

int profit(int i, int w)
{
    int prof1,prof2;
    if(i==n+1) return 0;

    if(vis[i][w]) return dp[i][w];

    vis[i][w]=1;

    if(w+weight[i]<=cap)
        prof1 = cost[i] + profit(i+1,w+weight[i]);
    else
        prof1 = 0;
    prof2 = profit(i+1,w);

    dp[i][w] = max(prof1,prof2);

    return dp[i][w];
}
int main()
{
    //freopen("int.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int tst,sum;
    scanf("%d",&tst);
    while(tst--)
    {
        sum = 0;
        scanf("%d",&n);
        for(int a=1; a<=n; a++) scanf("%d%d",&cost[a],&weight[a]);
        int g;
        scanf("%d",&g);
        while(g--)
        {
            memset(vis,0,sizeof(vis));
            scanf("%d",&cap);
            sum+=profit(1,0);
        }
        printf("%d\n",sum);
    }

    return 0;
}
