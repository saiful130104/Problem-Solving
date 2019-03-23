            ///Bismillahir Rahmanir Rahim
            /// Saiful Islam
            ///Jessore University of Science & Technology
            ///isaifulislam123@gmail.com
            ///isaifulislam123@yahoo.com

#include <bits/stdc++.h>

#define lscan(a) scanf("%lld",&a)
#define flscan(a) scanf("%f",&a)
#define dblscan(a) scanf("%lf",&a)
#define llscan(a,b) scanf("%lld%lld",&a,&b)
#define iscan(a) scanf("%d",&a)
#define iiscan(a,b) scanf("%d%d",&a,&b)
#define csprint(a) printf("Case %d: ",a++)
#define lprint(a) printf("%lld",a)
#define llprint(a,b) printf("%lld %lld",a,b)
#define iprint(a) printf("%d",a)
#define iiprint(a,b) printf("%d %d",a,b)
#define spaceprint printf(" ")
#define lineprint printf("\n")
#define infile freopen("int.txt","r",stdin)
#define outfile freopen("out.txt","w",stdout)
#define mx 1000009
#define pi acos(-1.0)

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

int primelist[mx+1],th_prime;
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
    for(int i=3;i<mx; i+=2)
        if(!mark[i])
        primelist[++th_prime]=i;
}

int main()

{
    //infile;
    //outfile;
    //seive();
    int n;
    while(iscan(n),n)
    {
        int sum=0;
        while(1)
        {
            int x = n/3;
            sum+=x;
            int y=n%3;
            n = x+y;
            if(n<3)
                break;
        }
        if(n==2)
            sum++;
        iprint(sum);
        lineprint;
    }

    return 0;
}








