#include <stdio.h>
int main()
{
    long long int a,b,x,n,i,j;
    scanf("%lld",&n);
    while(n--){
        scanf("%lld",&a);
        x = (((((a*567)/9)+7492)*235)/47) - 498 ;
        for(b=1;b<3;b++){
            i = x%10;
            j = x / 10;
            x = j;
        }
        if(i<0)
            i = i*(-1) ;
    printf("%lld\n",i);

    }

    return 0;
}
