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
        int ara[7];
        char ch;
        for(int i=0; i<7; i++)
            iiscan(ara[i]);
        int sum = min(ara[4],min(ara[5],ara[6]));
        sum = ara[4]+ara[5]+ara[6] - sum;
        sum/=2;
        sum+=ara[0]+ara[1]+ara[2]+ara[3];
        if(sum<60)
            ch='F';
        else if(sum<70)
            ch = 'D';
        else if(sum<80)
            ch = 'C';
        else if(sum<90)
            ch = 'B';
        else ch = 'A';
        //csprint(cs);
        printf("Case %d: %c\n",cs++,ch);
    }

    return 0;
}


