#include <bits/stdc++.h>
#define max 56356300
#define to 100000000
typedef long long int ll;
using namespace std;
char prime[max];
ll n,i,j,l,ara_prime[to],prime_list[500],sq;

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
     cout<<j<<endl;
}

void prime_fact(ll num)
{
    sq=sqrt(num);
    for(i=1,j=0; ara_prime[i]<=sq; i++){
        while(!(num%ara_prime[i])){
            prime_list[++j]=ara_prime[i];
            num/=ara_prime[i];
        }
        if(num==1)
            break;
    }
    if(num>1)
        prime_list[++j]=num;
}
int main()
{
    prime_generator();
    cin>>n;
    prime_fact(n);
    if(n==1){
        cout<<n<<endl;
        return 1;
    }
    for(i=1; i<j; i++)
        cout<<prime_list[i]<<", ";
    cout<<prime_list[i]<<endl;
    return 0;
}
