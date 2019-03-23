///prblm link: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=&problem=2661&mosmsg=Submission+received+with+ID+17300943

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,n,s,t;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&a);
        b=a*2;
        n=sqrt(b);
        s=(n*(n+1)/2);
        if(a>=s)
            printf("%lld\n",n);
        else
            printf("%lld\n",--n);

    }


    return 0;
}

