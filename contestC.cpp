#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int p,n;
        while(scanf("%lld",&p)!=EOF){
            if(p==1 || p==0)
                printf("0\n");
            else
                printf("%lld\n",p-1);
        }
    return 0;
}
