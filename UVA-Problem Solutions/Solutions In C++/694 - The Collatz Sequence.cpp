#include <bits/stdc++.h>

using namespace std;
typedef long long int lng;

int main()
{
    lng A,limit,terms,cs=1,a;
    while(scanf("%lld%lld",&a,&limit)==2){
        A=a;
        if(A<0 && limit<0)
            break;
        terms = 1;
        while(1){
            if((A&1)==1)
                A = (A*3)+1;
            else
                A/=2;
            if(A>limit)
                break;
            terms++;
            if(A==1)
                break;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",cs++,a,limit,terms);
    }
    return 0;
}
