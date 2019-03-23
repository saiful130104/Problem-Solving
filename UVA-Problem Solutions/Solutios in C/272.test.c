#include <stdio.h>
#include <string.h>
int main()
{
    int a, b=0,len;
    char ch[1000];
    while(gets(ch)){
        len = strlen(ch);
        for(a=0;a<len;a++){
            if(ch[a] == '"' && b%2==0){
                printf("``");
                b++;
            }
            else if(ch[a] == '"' && b%2==1){
                printf("''");
                b++;
            }
            else
                printf("%c",ch[a]);
        }
        printf("\n");
    }

    return 0;
}

