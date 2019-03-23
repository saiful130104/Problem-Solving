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
#define mx 10000001

using namespace std;
typedef long long int lng;

bool mark[mx];
void seive()
{
    int sq = sqrt(mx);
    mark[0]=mark[1]=1;
    for(int i=4; i<mx; i+=2)
        mark[i]=1;
    for(int i=3; i<sq+2;i+=2)
    {
        if(!mark[i])
        {
            for(int j=i*i; j<mx; j+=i*2)
                mark[j]=1;
        }
    }
}

int main()

{
    seive();
    int n,nn,nnn;
    while(iiscan(n)==1)
    {
        nn=0;
        nnn=n;
        if(mark[n])
            printf("%d is not prime.\n",n);
        else
        {
            while(n)
            {
                nn = nn*10 + n%10;
                n/=10;
            }
            if(!mark[nn] && nn!=nnn)
                printf("%d is emirp.\n",nnn);
            else
                printf("%d is prime.\n",nnn);
        }
    }
    return 0;
}



