#include <stdio.h>
#include <string.h>

int length;
void string_length(char str[])
{

    length = strlen(str);
    if(length>3)
        printf("3\n");
    else{
        if((str[0] =='o' && str[2] =='e' ) || (str[0] =='o' && str[1] =='n') || (str[1] =='n' && str[2] =='e'))
            printf("1\n");
        else
            printf("2\n");
    }

}
int main()
{
    int n;
    char str[7];
    scanf("%d%*c",&n);
    while(n--){
        gets(str);
        string_length(str);
    }
    return 0;
}


