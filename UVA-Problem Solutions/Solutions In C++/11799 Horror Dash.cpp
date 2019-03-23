#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,cs=1;
    cin>>t;
    while(t--){
        ll big=0,i;
        scanf("%lld",&n);
        while(n--){
            scanf("%lld",&i);
            if(big<i)
                big = i;
        }
        printf("Case %lld: %lld\n",cs++,big);
    }

    return 0;
}
