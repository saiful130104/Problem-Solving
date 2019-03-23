#include<stdio.h>

int main()
{
    long long int n;
    while(1){
    long long int b=0,i=1,r,sum=0;
    int ara[50],index=0,j;
    scanf("%lld",&n);
    if(n==0)
        break;
    while(n)
    {
        r=n%2;
        ara[index]=n%2;
        n=n/2;
        sum=sum+r;
        index++;
    }

    printf("The parity of ");
    j=index-1;
    while(j>=0)
        printf("%d",ara[j--]);
    printf(" is %lld (mod 2).\n",sum);
    }
    return 0;
}
