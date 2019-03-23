///problem link:https:https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1335

#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>

using namespace std;
#define MAX 20000000
char prime[MAX];
int primenum[MAX];
int twin[MAX];
long long int i,j,x,toin=0;
void prime_generator( )
{
    x =int(sqrt(MAX));
    for( i=3; i<=x; i+=2){
        if(prime[i]==0){
            for( j=i*i; j<=MAX; j+=i)
                prime[j]=1;
        }
    }
    primenum[0]=2;
    for(int i=3,j=0;i<=MAX; i+=2){
        if(prime[i]==0)
            primenum[++j]=i;

    }
    for(i=1; i<=j; i++){
        if((primenum[i]-primenum[i-1])==2)
            twin[++toin]=primenum[i];
    }
}

int main()
{
   long long int a,b,n,p,q,r,c;
    prime_generator();
    while(scanf("%lld",&a) != EOF){

        if(a==0)
            return 0;
        cout<<"("<<twin[a]-2<<", "<<twin[a]<<")"<<endl;
    }
    return 0;
}

