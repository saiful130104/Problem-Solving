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

    int cs=1,tst;
    iiscan(tst);
    while(tst--)
    {
        char ch;
        int m,h,ck=1;
        scanf("%d%c%d",&h,&ch,&m);
        if(h==11 && m==0)
            printf("01:00\n");
        else
        {
            if(h<11)
            ck=0,h = 12-h;
        if(m)
        {
            if(h==11 && ck)
                h=12;
            else
                h--;
            m = 60-m;
        }
        //printf("Case %d: %d\n",cs++,mn);
        if(h<10)
            printf("0%d:",h);
        else
            printf("%d:",h);
        if(m)
        {
            if(m<10)
                printf("0%d\n",m);
            else
                printf("%d\n",m);
        }
        else
            printf("00\n");
        }
    }

    return 0;
}




