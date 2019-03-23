#include <bits/stdc++.h>
#define llscan(a) scanf("%lld",&a)
#define iiscan(a) scanf("%d",&a)
#define csprint(a) printf("Case %d: ",a++)
#define llprint(a) printf("%lld",a)
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

    int cs=1,a,b,t;
    iiscan(t);
    for(int i=0; i<t; i++)
    {
        if(i)
            lineprint;
        iiscan(a);
        iiscan(b);
        b+=1;
        b/=2;
        if(a&1)
            a-=1;
        a/=2;
        csprint(cs);
        iiprint(b*b-a*a);
    }
    lineprint;

    return 0;
}
