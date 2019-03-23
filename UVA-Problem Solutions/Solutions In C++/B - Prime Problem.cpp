#include <bits/stdc++.h>
#define mx 1000001

using namespace std;
typedef long long int lng;


int sq,i,j,digit_prime[78499];
bool prime[mx],f_prime[mx];

void seive()
{
    sq = sqrt(mx);
    for(i=4; i<=mx; i+=2)
        prime[i]=1;
    for(i=3; i<=sq; i+=2){
        if(prime[i]==0){
        int p=i*2;
        for(j=i*i; j<=mx; j+=p)
            prime[j]=1;
        }
    }
    digit_prime[1]=2;
    for(i=3,j=1; i<=mx; i+=2){
        if(prime[i]==0)
            digit_prime[++j] = i;
    }
    for(i=1;i<=j; i++){
        int n=digit_prime[i],sum=0;
        while(n!=0){
            sum+=(n%10);
            n/=10;
        }
        if(prime[sum]==0)
            f_prime[digit_prime[i]]=1;
    }
}
int main()
{
    seive();
    int tst,a,b;
    scanf("%d",&tst);
    while(tst--){
        scanf("%d%d",&a,&b);
        int count=0;
        if(a==2)
            count++;
        if(a%2==0)
            a++;
        for(i=a; i<=b; i+=2){
            if(f_prime[i]==1)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
