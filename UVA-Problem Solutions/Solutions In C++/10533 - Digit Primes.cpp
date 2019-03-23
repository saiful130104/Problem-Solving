///problem link:https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1474

#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>

using namespace std;
#define MAX 1000001

int cusum[1000002];
bool prime[MAX];
int i,j,x;

bool digit_prime(int p)
{
    int primesum=0;
    while(p>0){
        primesum+=(p%10);
        p/=10;
    }
    if(prime[primesum]==0)
        return 1;
    return 0;
}

void prime_generator( )
{
    x =int(sqrt(MAX));
    prime[0]=prime[1]=1;
    for(i=4; i<=MAX; i+=2)
        prime[i]=1;
    for( i=3; i<=x; i+=2){
        if(prime[i]==0){
            for( j=i*i; j<=MAX; j+=i)
                prime[j]=1;
        }
    }
}

int main()
{

    int a,b,mn,mx,n;
    prime_generator();
    int sum = 0;
    for(i=1;i<1000001; i++)
    {
        if(!prime[i])
            if(digit_prime(i))
                sum++;
        cusum[i]=sum;
    }
    scanf("%d",&n);
    while(n--){
        sum=0;
        scanf("%d%d",&mn,&mx);
        printf("%d\n",cusum[mx]-cusum[mn-1]);
    }
    return 0;
}
