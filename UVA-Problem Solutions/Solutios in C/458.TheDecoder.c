#include<stdio.h>
#include<string.h>
int main()
{
    freopen("int.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int a,b,n,str2[1000];
    char str[1000];
    while(scanf("%s",str) != EOF){
        n=strlen(str);
        for(a=0;a<n;a++){
            str2[a] = str[a];
            str2[a] -= 7;
        }
        for(a=0;a<n;a++){
            printf("%c",str2[a]);
        }
        printf("\n");
    }
    return 0;
}
