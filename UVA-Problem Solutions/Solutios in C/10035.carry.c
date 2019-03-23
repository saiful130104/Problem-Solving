#include <stdio.h>

int main()
{
   long unsigned int n1,n2,x,y,sum;
    while( 1 ){
        scanf("%lu%lu",&n1,&n2);
       long unsigned int z = 0,c=0;
        if (n1 == 0 && n2 == 0)
            return 0;
       while (n1 != 0 || n2 != 0){
            x = n1%10;
            y = n2%10;
            sum = x + y + c;
            c = sum/10;
            x = n1/10;
            y = n2/10;
            n1 = x;
            n2 = y;
            if(c>=1)
                z++;
        }
        if(z==0)
            printf("No carry operation.\n");
        else if(z==1)
            printf("%lu carry operation.\n",z);
        else
            printf("%lu carry operations.\n",z);
    }
    return 0;
}


