#include <bits/stdc++.h>
#define cin(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define cout(a) printf("%lld\n",a);
#define coutn() printf("\n");
typedef long long lng;
using namespace std;

lng bigmode(lng b, lng p, lng m)
{
    lng x;
    if(p==0)
        return 1;
    x = bigmode(b,p/2,m);
    x = (x*x)%m;
    if(p&1)
        x = (x*b)%m;
    return x;
}
int main()
{
    lng b,p,m,res;
    while(cin(b,p,m) == 3){
        res = bigmode(b,p,m);
        cout(res);
    }
    return 0;
}
