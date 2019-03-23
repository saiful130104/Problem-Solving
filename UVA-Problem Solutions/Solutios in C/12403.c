#include <stdio.h>
#include <string.h>

int main()
{
    int amount = 0, i,j,test;
    char str[7];
    scanf("%d",&test);
    while(test--){
        scanf("%s",&str);
        if(str[0]=='d'){
            scanf("%d",&i);
            amount += i;
        }
        else
            printf("%d\n",amount);
    }
    return 0;
}

