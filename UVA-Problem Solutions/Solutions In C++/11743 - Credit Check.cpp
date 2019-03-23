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
    //seive();
    int tst;
    iiscan(tst);
    cin.ignore();
    while(tst--)
    {
        string str,nstr="";
        getline(cin,str);
        int len = str.size(),j,sum=0;
        for(int i=0;i<len; i++)
        {
            if(str[i]!=' ')
                nstr+=str[i];
        }
        j=nstr.size();
        for(int i=0; i<j; i++)
        {
            if(i&1)
                sum = sum + (nstr[i]-'0');
            else
            {
                int n = ((nstr[i]-'0')*2);
                sum+=(n%10);
                sum+=(n/10);
            }
        }
        if(sum%10==0)
            printf("Valid\n");
        else
            printf("Invalid\n");
    }
    return 0;
}




