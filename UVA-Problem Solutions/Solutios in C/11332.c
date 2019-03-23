#include <stdio.h>

long long int digit_count(long long int N)
{
    long long int i,j,s;
    while(N>9){
        i=N,s=0;
        while(i!=0){
           i = N/10;
           s = s + N%10;
           N = i;
        }
        N = s;
    }

    return N;

}

int main()
{
    long long int n,j;

    while(scanf("%lld",&n) != EOF){
        if(n>0){
            j = digit_count(n);
            printf("%lld\n",j);
        }
        else
            return 0;
    }

    return 0;
}

