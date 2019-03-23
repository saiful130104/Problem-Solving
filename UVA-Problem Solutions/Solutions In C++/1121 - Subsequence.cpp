#include <bits/stdc++.h>
#define get(a) scanf("%d",&a)
#define lnget(a) scanf("%lld",&a)
#define line() printf("\n")
#define case(a) printf("Case %d: ",a++)
#define put(a) printf("%d",a)
#define lnput(a) printf("%lld",a)
#define lng long long int
#define PI acos(-1.0)
#define rt return 0

using namespace std;

int main()
{
    int  a,n;
    lng s,sum;
    while(scanf("%d%lld",&n,&s)!=EOF)
    {
        int low=0,high=0,ara[n],len=n+1,temp_len=n+2;
        for(int i=0; i<n; i++) get(ara[i]);
        sum = ara[low] ;
        while(high<n)
        {
            while(sum<s)
            {
                high++;
                if(high==n)
                    break;
                sum+=ara[high];
            }
            if(sum>=s)
                temp_len = (high - low) + 1;
            if(temp_len<len) len=temp_len;
            if(low<=high)
            {
                sum-=ara[low];
                low++;
            }
        }
        if(len>n)
            cout<<"0";
        else
            cout<<len;
        line();
    }
    rt;
}
