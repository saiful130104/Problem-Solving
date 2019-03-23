#include <bits/stdc++.h>

using namespace std;
typedef long long int lng;

int main()
{
    lng a,b,mx,mx_num;
    while(scanf("%lld%lld",&a,&b)==2){
        mx = 0;
        if(a==0 && b==0)
            break;
        if(a>b)
            swap(a,b);
        lng n,count;
        for(lng i=a; i<=b; i++){
            count=1;
            n=i;
            while(1){
                if((n&1)==0)
                    n = n/2;
                else
                    n = (3*n)+1;
                if(n<=1)
                    break;
                count++;
            }
            if(count>mx)
                mx = count,mx_num=i;
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,mx_num,mx);
    }
    return 0;
}
