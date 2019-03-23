#include <stdio.h>

int main()
{
    long long int a,b,c,d,e,f,g,n,x,y;
    while(1){
        scanf("%lld",&n);
        if(n==0)
            return 0;
        scanf("%lld%lld",&x,&y);
        for(d=0;d<n;d++){
            scanf("%lld%lld",&a,&b);
            if((a==x) || (b==y))
                printf("divisa\n");
            else if(a>x){
                if(b>y)
                    printf("NE\n");
                else
                    printf("SE\n");
            }
            else{
                if(b>y)
                    printf("NO\n");
                else
                    printf("SO\n");
            }
        }
    }

    return 0;
}
