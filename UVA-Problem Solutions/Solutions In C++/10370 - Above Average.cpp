#include <bits/stdc++.h>

#define llscan(a) scanf("%lld",&a)
#define dblscan(b) scanf("%lf",&b)
#define iiscan(a) scanf("%d",&a)
#define csprint(a) printf("Case %d: ",a++)
#define llprint(a) printf("%lld",a)
#define dblprint(b) printf("%lf",b)
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

    int tst;
    iiscan(tst);
    while(tst--)
    {
        int test;
        iiscan(test);
        double ara[test],sum=0,avg;
        for(int i=0; i<test; i++)
        {
            dblscan(ara[i]);
            sum+=ara[i];
        }
        avg = sum/(double)(test);
        sum=0;
        for(int i=0; i<test; i++)
        {
            if(ara[i]>avg)
            sum++;
        }
        avg = (sum*100)/(double)(test);
        printf("%0.3lf%\n",avg);
    }

    return 0;
}






