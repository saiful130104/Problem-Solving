# cumulative-sum-in-2D-matrix-
this will help to find sum of the numbers those are in make a rectangle from point(a,b) to point(c,d)

#include<bits/stdc++.h>
#define sc scanf
#define sfi(a) sc("%d",&a)
#define sfi2(a,b) sc("%d%d",&a,&b)
#define sfl(a) sc("%lld",&a)
#define sfl2(a,b) sc("%lld%lld",&a,&b)

using namespace std;
typedef long long int lng;

lng ara[100][100],qsum[100][100];
lng GCD(lng a, lng b)
{
    if(a%b==0)
        return b;
    return GCD(b,a%b);
}

void solve()
{
    int n;
    sfi(n);
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            sfi(ara[i][j]);
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            qsum[i][j] = qsum[i-1][j]+qsum[i][j-1]+ara[i][j]-qsum[i-1][j-1];
    int qr;
    sfi(qr);
    while(qr--)
    {
        int a,b,c,d;
        sfi2(a,b);
        sfi2(c,d);
        printf("%d\n",qsum[c][d]-qsum[a-1][d]-qsum[c][b-1]+qsum[a-1][b-1]);
    }
}

int main()
{
    int tst=1;
    sfi(tst);
    while(tst--)
        solve();
    return 0;
}
