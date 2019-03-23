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
    int ara[10] = {0,1,4,9,16,25,36,49,64,81};
    int cs=1,a,b,c,tst;
    iiscan(tst);
    while(tst--)
    {
        //csprint(cs);
        bool mark[1000]={false};
        lng x,sum=0,n,temp;
        llscan(x);
        n=x;
        while(1)
        {
            while(n)
            {   sum+=ara[n%10];
                n/=10;
            }
            //cout<<sum<<endl;
            if(sum==1)
            {
                printf("Case #%d: %lld is a Happy number.\n",cs++,x);
                break;
            }
            if(sum==x || mark[sum])
            {
                printf("Case #%d: %lld is an Unhappy number.\n",cs++,x);
                break;
            }
            mark[sum]=1;
            n=sum;
            sum=0;
        }
    }

    return 0;
}


