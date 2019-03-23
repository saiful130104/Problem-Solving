#include <bits/stdc++.h>

using namespace std;
typedef long long int lng;

int main()
{
    lng tst,sum,diff;
    scanf("%lld",&tst);
    while(tst--){
        scanf("%lld%lld",&sum,&diff);
        if((sum<diff) || ((sum%2==1) && (diff%2==0)) || ((sum%2==0) && (diff%2==1)))
            printf("impossible\n");
        else{
            lng max_num,min_num;
            max_num = (sum - diff)/2 + diff;
            min_num = (sum - diff)/2;
            printf("%lld %lld\n",max_num,min_num);
        }
    }
    return 0;
}
