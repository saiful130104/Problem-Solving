#include <bits/stdc++.h>

using namespace std;
typedef long long int lng;

lng dp[101][101];

lng n_c_r(lng n, lng r)
{
    if(n==r || !r) return 1;
    if(dp[n][r]) return dp[n][r];
    else
        dp[n][r] = n_c_r(n-1,r) + n_c_r(n-1,r-1);
    return dp[n][r];
}
int main()
{
    lng ncr,N,R;
    while(cin>>N>>R,N||R)
    {
        memset(dp, 0, sizeof(dp));
        ncr = n_c_r(N,R);
        cout<<N<<" things taken "<<R<<" at a time is "<<ncr<<" exactly.\n";
    }

    return 0;
}
