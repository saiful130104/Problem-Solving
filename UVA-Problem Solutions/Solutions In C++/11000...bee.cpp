#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int f,b,m,i,y,s;
    while(1){
        scanf("%lld",&y);
        if(y<0)
            return 0;
        b=1;m=0;f=1;s=0;
        for(i=1; i<=y; i++){
            s=b-f;
            m=b;
            f=s+1;
            b=m+f;
        }
        printf("%lld %lld\n",m,b);

    }

    return 0;
}

