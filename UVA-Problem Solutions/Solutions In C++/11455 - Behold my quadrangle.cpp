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

    int cs=1,tst;
    iiscan(tst);
    while(tst--)
    {
        int ara[5];
        string str = "quadrangle";
        for(int i=0; i<4; i++)
            iiscan(ara[i]);
        sort(ara,ara+4);
        if(ara[0]==ara[1] && ara[1]==ara[2] && ara[2]==ara[3])
            str = "square";
        else if(ara[0]==ara[1] && ara[2]==ara[3])
            str = "rectangle";
        else if((ara[0]+ara[1] + ara[2]) <= ara[3])
            str = "banana";
        //printf("Case %d: %c\n",cs++,ch);
        cout<<str;
        lineprint;
    }
    return 0;
}



