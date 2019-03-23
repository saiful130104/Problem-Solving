///problem link:https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=484

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
   long long int a,b,n,p,q,r,c;
    prime_generator();
    while(1){
        scanf("%lld",&a);
        if(a==0)
            return 0;
        for(p=0; p<=j;p++){
            if(primenum[p]>=a)
                break;
        }
        r=0;
        while(1){
            c=primenum[r++] + primenum[p];
            if(c>a){
                r--;
                p--;
            }

            if(c==a){
                cout<<a<<" = "<<primenum[r-1]<<" + "<<primenum[p]<<endl;
                break;
            }
        }
    }
    return 0;
}
