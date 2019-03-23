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

    lng h1,h2,m1,m2;
    //iiscan(tst);
    while(llscan(h1),llscan(m1),llscan(h2),llscan(m2),h1|m2|h2|m2)
    {
        m1 = h1*60 + m1;
        m2 = h2*60 + m2;
        if(m2<m1)
            m2+=(24*60);
        printf("%lld\n",m2-m1);
    }

    return 0;
}





