            ///Bismillahir Rahmanir Rahim
            /// Saiful Islam
            ///Jessore University of Science & Technology
            ///isaifulislam123@gmail.com
            ///isaifulislam123@yahoo.com

#include<cstdio>
#include<iomanip>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<deque>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<limits>

#define scl(a) scanf("%lld",&a)
#define flscan(a) scanf("%f",&a)
#define dblscan(a) scanf("%lf",&a)
#define llscan(a,b) scanf("%lld%lld",&a,&b)
#define llscan(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define iscan(a) scanf("%d",&a)
#define iiscan(a,b) scanf("%d%d",&a,&b)
#define iiiscan(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define csprint(a) printf("Case %d: ",a++)
#define lprint(a) printf("%lld",a)
#define llprint(a,b) printf("%lld %lld",a,b)
#define iprint(a) printf("%d",a)
#define iiprint(a,b) printf("%d %d",a,b)
#define spaceprint printf(" ")
#define lineprint printf("\n")
#define infile freopen("in.txt","r",stdin)
#define outfile freopen("out.txt","w",stdout)
#define mx 1000009
#define pi acos(-1.0)
#define floop(i,n) for(i=0; i<n; i++)

using namespace std;

///#define area of a polygon inside a circle (1/2)*n*r*r*(sin(2*pi)/n)
using namespace std;
typedef long long int lng;

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

bool leap_year(int year)
{
    if(year%400==0 ||(year%100!=0 && year%4==0))
        return 1;
    return 0;
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
    int tst,cs=1;
    iscan(tst);
    while(tst--)
    {
        printf("Case #%d: ",cs++);
        int py,pm,pd,by,bd,bm,y,m,d;
        char ch;
        scanf("%d%c%d%c%d",&pd,&ch,&pm,&ch,&py);
        scanf("%d%c%d%c%d",&bd,&ch,&bm,&ch,&by);
        y = py-by;
        m = pm-bm;
        d = pd-bd;
        if(y>131)
            printf("Check birth date\n");
        else if(y>130)
        {
            if(m<0)
                printf("130\n");
            else if(d<0)
                printf("130\n");
            else
                printf("Check birth date\n");
        }
        else if(y<0)
            printf("Invalid birth date\n");
        else if(y==0)
        {
            if(m<0)
                printf("Invalid birth date\n");
            else if(m==0)
            {
                if(d<0)
                    printf("Invalid birth date\n");
                else
                    printf("0\n");
            }
            else
                printf("0\n");
        }
        else
        {
            if(m>0)
                printf("%d\n",y);
            else if(m<0)
                printf("%d\n",y-1);
            else if(m==0 && pm!=2)
            {
                if(d<0)
                    printf("%d\n",y-1);
                else
                    printf("%d\n",y);
            }
            else
            {
                if(leap_year(py)&&leap_year(by))
                {
                    if(d<0)
                        printf("%d\n",y-1);
                    else
                        printf("%d\n",y);
                }
                else if(leap_year(py))
                {
                    if(d==1)
                        printf("0\n");
                    else if(d<0)
                        printf("%d\n",y-1);
                    else
                        printf("%d\n",y);
                }
                else if(leap_year(by))
                {
                    if(d==-1)
                        printf("0\n");
                    else if(d<0)
                        printf("%d\n",y-1);
                    else
                        printf("%d\n",y);
                }
                else if(d>0)
                    printf("%d\n",y);
                else if(d<0)
                    printf("%d\n",y-1);
                else
                    printf("0\n");
            }
        }
    }
    return 0;
}








