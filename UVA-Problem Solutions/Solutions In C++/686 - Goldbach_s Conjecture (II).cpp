///problem link:https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=24&problem=627&mosmsg=Submission+received+with+ID+17254512

#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>

using namespace std;
#define MAX 1000001
char prime[MAX];
int primenum[MAX];
long long int i,j,x;
void prime_generator( )
{
    x =int(sqrt(MAX-1));
    for( i=3; i<=x; i+=2){
        if(prime[i]==0){
            for( j=i*i; j<=MAX-1; j+=i)
                prime[j]=1;
        }
    }
    primenum[0]=2;
    for(int i=3,j=0;i<=MAX; i+=2){
        if(prime[i]==0){
            primenum[++j]=i;
        }
    }
}

int main()
{
   long long int a,b,n,p,q,r,c,sum;
    prime_generator();
    while(1){
        scanf("%lld",&a);
        if(a==0)
            return 0;
        for(p=0; p<=j;p++){
            if(primenum[p]>=a)
                break;
        }
        sum=0;
        r=0;
        while(1){
            c=primenum[r++] + primenum[p];
            if(c>a){
                r--;
                p--;
            }

            if(c==a)
                sum++;//cout<<a<<" = "<<primenum[r-1]<<" + "<<primenum[p]<<endl;
            if(primenum[r-1]>=primenum[p])
                break;
        }
        cout<<sum<<endl;
    }
    return 0;
}

