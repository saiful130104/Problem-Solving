///problm link: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1732
///it's is built on prime factorization
#include <bits/stdc++.h>
#define max 563563
#define to 46350
typedef long long int ll;
using namespace std;
char prime[max];
ll n,i,j,l,ara_prime[to],prime_list[500],sq,ck=0;

void prime_generator()
{
    sq=sqrt(max);
    for(i=4; i<=max; i+=2)
        prime[i]=1;
    for(i=3; i<=sq; i+=2){
        if(!prime[i]){
            for(j=i*i; j<=max; j+=i)
                prime[j]=1;
        }
    }
    j=0;
    ara_prime[++j]=2;
    for(i=3; i<=max; i+=2){
        if(!prime[i])
            ara_prime[++j]=i;
    }
}

ll prime_fact(ll num)
{
    ll isprime=0,sum=0,ans=1;
    sq=sqrt(num);
    for(i=1; i<=sq; i++){
        if(num%ara_prime[i]==0){
            isprime++;
            ans=1;
            while(!(num%ara_prime[i])){
                ans*=ara_prime[i];
                num/=ara_prime[i];
            }
            sum+=ans;
        }
    }
    if(isprime==0 || (isprime==1 && num==1))
        return (n+1);
    else{
        if(num>1)
            return (sum+num);
        else
            return sum;
    }

}
int main()
{
    ll cs=1,s;
    prime_generator();
    while(scanf("%lld",&n)!=EOF){
        if(n==0)
            return 0;
        if(n==1)
            cout<<"Case "<<cs++<<": 2"<<endl;
        else if(!(n&n-1))
            cout<<"Case "<<cs++<<": "<<n+1<<endl;
        else{
            s = prime_fact(n);
            cout<<"Case "<<cs++<<": "<<s<<endl;
        }
    }
    return 0;
}
