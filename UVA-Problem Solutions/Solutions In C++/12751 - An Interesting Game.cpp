#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int a,n,x,k,t,cs=1,sum,sum1,n1;
    cin>>t;
    while(t--){
        cin>>n>>k>>x;
        n1=k+x-1;
        sum1 = (n1*(n1+1))/2;
        sum=(n*(n+1))/2;
        sum-= sum1;
        n1=x-1;
        sum1=(n1*(n1+1))/2;
        sum+=sum1;
        printf("Case %lld: %lld\n",cs++,sum);
    }

    return 0;
}

