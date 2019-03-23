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
    lng n;
    while(llscan(n))
    {
        string str;
        if(n<0)
        break;
        while(1)
        {
            str = (char)(n % 3 + 48) + str;
            n/=3;
            if(!n)
                break;
        }
        cout<<str<<endl;
    }
    return 0;
}






