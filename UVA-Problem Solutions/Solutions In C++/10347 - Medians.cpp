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

int main()

{
    //infile;
    //outfile;

   double p,q,r,s;
    //iiscan(tst);
    while(scanf("%lf%lf%lf",&p,&q,&r)==3)
    {
        s = p+q+r;
        s/=2.0;
        s = sqrt(s*(s-p)*(s-q)*(s-r));
        s = (4.0/3.0)*s;
        if(s>0)
            printf("%0.3lf\n",s);
        else
            printf("-1.000\n");
    }

    return 0;
}






