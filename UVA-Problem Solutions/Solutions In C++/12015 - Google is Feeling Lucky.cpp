            ///Bismillahir Rahmanir Rahim
            /// #Saiful_Islam <stdio.R>
            ///Jessore University of Science & Technology,CSE_14
            ///isaifulislam123@gmail.com
            ///isaifulislam123@yahoo.com

#include <bits/stdc++.h>

#define scl1(a) scanf("%lld",&a)  ///single long long int input
#define scf(a) scanf("%f",&a)      ///single float input
#define scd(a) scanf("%lf",&a)      ///single double input
#define scl2(a,b) scanf("%lld%lld",&a,&b)
#define scl3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define sci1(a) scanf("%d",&a)       ///single int input
#define sci2(a,b) scanf("%d%d",&a,&b)
#define sci3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define csprint(a) printf("Case %d: ",a++)
#define prl1(a) printf("%lld",a)
#define prl2(a,b) printf("%lld %lld",a,b)
#define pri1(a) printf("%d",a)
#define pri2(a,b) printf("%d %d",a,b)
#define spaceprint printf(" ")
#define lineprint printf("\n")
#define infile freopen("int.txt","r",stdin)
#define outfile freopen("out.txt","w",stdout)
#define MX 1000009
#define pi acos(-1.0)
#define inf 1<<31
#define fs first
#define sc second
#define pb(a) push_back(a)
#define ppb pop_back()

///#define area of a polygon inside a circle (1/2)*n*r*r*(sin(2*pi)/n)
using namespace std;
typedef long long int lng;

lng GCD(lng a,lng b)
{
    while(b)
        b ^= a ^= b ^= a%= b;
    return a;
}

string tobin(lng n)  ///converting a decimal number to a binary number and storing like string
{
    string bin = "";
    while(n)
    {
        bin = (char)(n % 2 + 48) + bin;
        n >>= 1;
    }
    return bin;
}

lng todec(string str)  ///converting a binary(string) number to a decimal number
{
    lng ans=0;
    lng len = str.size(),j=1;
    for(int i=len-1; i>=0; i--,j*=2)
        ans+=(str[i]-48)*j;
    return ans;
}

int primelist[MX+1],th_prime;
bool mark[MX];
void seive()
{
    int sq = sqrt(MX);
    mark[0]=mark[1]=1;
    for(int i=4; i<MX; i+=2)
        mark[i]=1;
    for(int i=3; i<sq+2;i+=2)
    {
        if(!mark[i])
        {
            for(int j=i*i; j<MX; j+=i*2)
                mark[j]=1;
        }
    }
    for(int i=3;i<MX; i+=2)
        if(!mark[i])
        primelist[++th_prime]=i;
}

int main()

{
    //infile;
    //outfile;
    //seive();
    int tst,cs=1;
    sci1(tst);
    while(tst--)
    {
        printf("Case #%d:\n",cs++);
        string str[12];
        int ara[12],mx=0;
        for(int i=0; i<10; i++)
        {
            cin>>str[i]>>ara[i];
            mx = max(mx,ara[i]);
        }
        for(int i=0;i<10; i++)
        {
            if(ara[i]==mx)
                cout<<str[i]<<endl;
        }
    }

    return 0;
}







