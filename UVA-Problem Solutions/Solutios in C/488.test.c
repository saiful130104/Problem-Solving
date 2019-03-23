#include <stdio.h>
int main()
{
    int a,b,c,d,e=0,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        for(c=1;c<=b;c++){
            for(d=1;d<=a;d++){
                for(e=1;e<=d;e++)
                    printf("%d",d);
                printf("\n");
            }
            for(d=a-1 ;d>=1;d--){
                for(e=d;e>=1;e--)
                    printf("%d",d);
                printf("\n");
            }
            if(t==0 && c==b)
                break;
            else
                printf("\n");
        }
    }
    return 0;
}
