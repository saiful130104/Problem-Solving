#include<bits/stdc++.h>

using namespace std;

typedef long long int lng;

lng dp[20][20];
int vis[20][20], vis_value=1,cnt;

lng calc(int n, int r)
{
    lng &ref = dp[n][r];
    if(!r || r==n)
        return 1;
    if(r==1 )
        return n;
    if( vis[n][r] == vis_value)
        return ref;
    vis[n][r] = vis_value;
    ref = calc(n-1,r)+calc(n-1,r-1);
    return ref;
}

int main()
{
    while(1)
    {
        int n,r;
        cin>>n>>r;
        cout<<calc(n,r)<<endl;
        vis_value++;
    }
    return 0;
}
