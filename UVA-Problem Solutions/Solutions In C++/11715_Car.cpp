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

double dist(double v, double u, double a)
{
    v*=v;
    u*=u;
    a*=2;
    return ((v-u)/a);
}

double ascel(double v, double u, double t)
{
    return ((v-u)/t);
}

double time(double v, double u, double a)
{
    return ((v-u)/a);
}

double frst_speed(double v, double a, double s)
{
    v*=v;
    a*=2*s;
    return (sqrt(v-a));
}

double last_speed(double u, double a, double s)
{
    u*=u;
    a*=2*s;
    return (sqrt(u+a));
}

int main()

{
    //infile;
    //outfile;
    double u,v,a,s,t;
    int n,cs=1;
    while(iiscan(n)==1,n)
    {
        csprint(cs);
        switch(n)
        {
            case 1:
            {
                dblscan(u);
                dblscan(v);
                dblscan(t);
                a = ascel(v,u,t);
                s = dist(v,u,a);
                dblprint(s);
                spaceprint;
                dblprint(a);
                break;
            }
            case 2:
            {
                dblscan(u);
                dblscan(v);
                dblscan(a);
                t = time(v,u,a);
                s = dist(v,u,a);
                dblprint(s);
                spaceprint;
                dblprint(t);
            break;
            }
            case 3:
            {

                dblscan(u);
                dblscan(a);
                dblscan(s);
                v = last_speed(u,a,s);
                t = time(v,u,a);
                dblprint(v);
                spaceprint;
                dblprint(t);
                break;
            }
            case 4:
            {

                dblscan(v);
                dblscan(a);
                dblscan(s);
                u = frst_speed(v,a,s);
                t = time(v,u,a);
                dblprint(u);
                spaceprint;
                dblprint(t);
                break;
            }

        }
        lineprint;
    }
    return 0;
}
