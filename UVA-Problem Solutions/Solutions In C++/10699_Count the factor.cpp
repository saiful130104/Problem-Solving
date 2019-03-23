#include <bits/stdc++.h>
#include <cstdio>
#include <cmath>
#define max 1000000
#define mn 1001
using namespace std;
typedef long long int ll;
ll a,b,c,i,j;
int primelist[mn];
bool prime[max];
void sieve()
{
    prime[1]= 1;
    for(i=4; i<=max; i+=2)
        prime[i]=1;
    for(i=3; i<=max; i+=3){
        if(prime[i]==0){
            int k=i+i;
            for(j=i*i; j<=max; j+=k)
                prime[j]=1;
        }
    }
    primelist[1]=2;
    j=1;
    for(i=3; i<=max && j<=mn; i+=2){
        if( prime[i]==0)
        primelist[++j]=i;
    }
}
void prime_factorize(ll n)
{
    a = sqrt(n)+1;
    b = 0;
    for(i=1; i<=a; i++){
        if( (n%primelist[i]) == 0){
            b++;
            while((n%primelist[i]) == 0)
                n = n/primelist[i];
        }
    }
    if(n>1)
        b++;
}


int main()
{
    ll N,x;
    sieve();
    while(scanf("%lld",&N)==1){
            if(N==0)
                break;
        else{
            prime_factorize(N);
            printf("%lld : %lld\n",N,b);
        }
    }
    return 0;
}

