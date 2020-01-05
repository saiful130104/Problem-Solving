#include<bits/stdc++.h>

using namespace std;
typedef long long int lng;

int dp[101][1002],weight[101],value[101];

int knapsack(int total_weight, int item)
{
    for(int i=0; i<=item; i++)  dp[i][0]=0;
    for(int i=0; i<=total_weight; i++)  dp[0][i]=0;
    for(int i=1; i<=item; i++)
    {
        for(int j=1; j<=total_weight; j++)
        {
            if(j<weight[i])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max(value[i]+dp[i-1][j-weight[i]],dp[i-1][j]);
        }
    }

    ///printing the dp array for debugging
   /*for(int i=1; i<=item; i++)
    {
        for(int j=1; j<=total_weight; j++)
           cout<<dp[i][j]<<" ";
        cout<<endl;
    }*/
    return dp[item][total_weight];
}

void solve()
{
    int total_weight,item;
     scanf("%d",&item);
    scanf("%d",&total_weight);
    for(int i=0; i<item; i++)
    {
        scanf("%d",weight+i+1);
        scanf("%d",value+i+1);
    }
    printf("%d\n",knapsack(total_weight,item));
}
int main()
{
    int tst;
    scanf("%d",&tst);
    while(tst--)
        solve();
    return 0;
}
