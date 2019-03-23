#include <stdio.h>
long long int c[1000000] ;
int main()
{
    long long int a,b ;
    int  p,d = 0;
    while(scanf("%lld%lld",&a,&b) !=EOF){
        if(b>a)
            c[d] = b - a ;
        else
            c[d] = a - b ;
       d++;
    }
    for(a=0; a<d; a++){
         printf("%lld\n",c[a]);
    }

    return 0;
}
