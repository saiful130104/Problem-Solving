#include <stdio.h>
int main()
{
    long long int a,b,c,n,i;
    scanf("%lld",&n);
    for(i=1; i<=n; i++){
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a>b && a>c){
            if(b>c)
                printf("Case %lld: %lld\n",i,b);
            else
                printf("Case %lld: %lld\n",i,c);
        }
        else if(b>a && b>c){
            if(a>c)
                printf("Case %lld: %lld\n",i,a);
            else
                printf("Case %lld: %lld\n",i,c);
        }
        else{
            if(b>a)
                printf("Case %lld: %lld\n",i,b);
            else
                printf("Case %lld: %lld\n",i,a);
        }
    }

    return 0;
}
