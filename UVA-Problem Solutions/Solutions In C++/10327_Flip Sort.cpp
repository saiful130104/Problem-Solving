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

    int n;
    while(iiscan(n)==1)
    {
        int count=0;
        int ara[n+1];
        for(int i=0; i<n; i++)
            iiscan(ara[i]);
        for(int i=0; i<n; i++)
        {
            int sum=0;
            for(int j=i+1; j<n; j++)
            {
                if(ara[i]>ara[j])
                {
                    //swap(ara[i],ara[j]);
                    sum++;
                }
            }
            count+=sum;
        }
        printf("Minimum exchange operations : %d\n",count);
    }

    return 0;
}

