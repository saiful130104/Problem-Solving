#include <stdio.h>

int main()
{
    int a,b,c,d;
    while(scanf("%d",&a) != EOF){
        d = a;
        while(a != 1 ){
            b = a/3;
            d += b;
            c = a%3;
            a = b + c;
            if(a == 2)
                a++;
        }

        printf("%d\n",d);
    }

    return 0;
}

