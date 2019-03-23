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
    //infile;
    //outfile;
    //seive();
    lng n,ara[20];
    ara[1]=1;
    for(lng i=2; i<21; i++)
        ara[i]= ara[i-1]*i;
    while(llscan(n)==1)
    {
        if(n<0)
        {
            n=abs(n);
            if(n&1)
                printf("Overflow!");
            else
                printf("Underflow!");
        }
        else{
            if(n<8)
            printf("Underflow!");
            else if(n<14)
                llprint(ara[n]);
            else
                printf("Overflow!");
        }
        lineprint;
    }
    return 0;
}





