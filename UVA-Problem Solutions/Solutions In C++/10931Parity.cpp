#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    char str[100],ch;
    while(scanf("%d",&a)==1){
        if(a<1)
            break;
        int i=0,j=0;
        while(a!=0){
            if(a&1==1)
                ch = '1',j++;
            else
                ch = '0';
            str[i++]=ch;
            a=a>>1;
        }
        printf("The parity of ");
        while(i--)
            cout<<str[i];
        printf(" is %d (mod 2).\n",j);
    }
    return 0;
}
