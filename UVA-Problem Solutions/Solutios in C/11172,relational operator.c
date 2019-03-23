#include <stdio.h>

int main()
{
    int t , a , b,l;
    scanf("%d",&t);
    char sign[t];
    for(l=0;l<t;l++){
        scanf("%d%d",&a,&b);
        if(a==b){
            sign[l]='=';
        }
        else if(a>b){
            sign[l]='>';
        }
        else{
            sign[l]='<';
        }
    }

    for(l=0;l<t;l++){
        printf("%c\n",sign[l]);
    }
    return 0;
}
