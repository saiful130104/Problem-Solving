            ///Bismillahir Rahmanir Rahim
            /// Saiful Islam
            ///Jessore University of Science & Technology
            ///isaifulislam123@gmail.com
            ///isaifulislam123@yahoo.com
            ///saifulislamjustcse@gmail.com

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

using namespace std;

typedef long long int lng;

int GCD(int a,int b)
{
    while(b)
        b ^= a ^= b ^= a%= b;
    return a;
}

int main()
{
    int n;
    while(iscan(n),n)
    {
        int sum=n-1;
        for(int i=2; i<n; i++)
        {
            for(int j=i+1; j<=n; j++)
                sum+=GCD(i,j);
        }
        printf("%d\n",sum);
    }

    return 0;
}

