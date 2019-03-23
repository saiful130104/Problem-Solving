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

int main()

{
    //infile;
    //outfile;

    int cs=1,tst;
    iiscan(tst);
    while(tst--)
    {
        lng mn = 100000000000;
        lng k,strt_mn,strt_hr,h,m,time,temp;
        char ch;
        llscan(k);
        scanf("%lld%c%lld",&strt_hr,&ch,&strt_mn);
        temp = strt_mn;
        strt_mn = strt_hr*60+strt_mn;
        while(k--)
        {
            scanf("%lld%c%lld%lld",&h,&ch,&m,&time);
            if(h<strt_hr)
                h+=24;
            if(h==strt_hr && temp>m)
                h+=24;
            time = time + ((h*60+m)-strt_mn);
            mn = min(time,mn);
        }
        printf("Case %d: %lld\n",cs++,mn);
    }

    return 0;
}



