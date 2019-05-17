#include<bits/stdc++.h>
#define inf 1<<28
using namespace std;
int dp[4003],a,b,c;

int way(int amount)
{
    if(amount==0)
        return 0;
    if(amount<0)
        return -inf;
    if(dp[amount]!=0)
        return dp[amount];
    dp[amount] = max(max(way(amount-a),way(amount-b)),way(amount-c)) + 1;
    return dp[amount];
}
int main()
{
    int amount;
    cin>>amount>>a>>b>>c;
    cout<<way(amount)<<endl;
    return 0;
}
