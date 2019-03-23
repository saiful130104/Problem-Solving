#include <bits/stdc++.h>

#define llscan(a) scanf("%lld",&a)
#define dblscan(b) scanf("%lf",&b)
#define iiscan(a) scanf("%d",&a)
#define csprint(a) printf("Case %d: ",a++)
#define llprint(a) printf("%lld",a)
#define dblprint(b) printf("%.3lf",b)
#define iiprint(a) printf("%d",a)
#define spaceprint printf(" ")
#define lineprint printf("\n")
#define infile freopen("int.txt","r",stdin)
#define outfile freopen("out.txt","w",stdout)

using namespace std;
typedef long long int lng;

lng power(int base, int p)
{
    int B=base;
    while(--p)
        base*=B;
    return base;
}

int main()

{
    //infile;
    //outfile;

    int n,a,b;
    while(iiscan(a),iiscan(b),a|b)
    {
        int lo;
        b = sqrt(b);
        lo = sqrt(a);
        if(lo*lo == a)
            lo--;
        iiprint(b-lo);
        lineprint;
    }

    return 0;
}


