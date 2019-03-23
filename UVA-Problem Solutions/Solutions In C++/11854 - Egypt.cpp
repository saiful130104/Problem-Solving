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

    int cs=1,a,b,c;
    while(iiscan(a),iiscan(b),iiscan(c),(a|b)|(a|c))
    {
        lng x,y,z;
        x = min(a,b);
        y = min(b,c);
        z = max(a,max(b,c));
        if((x*x + y*y)== z*z)
            printf("right\n");
        else
            printf("wrong\n");
    }

    return 0;
}

