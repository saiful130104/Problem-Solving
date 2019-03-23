#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,h,w,b,low,a,p,ck;
    while(scanf("%lld%lld%lld%lld",&n,&b,&h,&w) != EOF){
        low=10001;
        ck=0;
        for(int i=1; i<=h; i++){
            cin>>p;
            for(int j=1; j<=w; j++){
                cin>>a;
                if(a>=n)
                    ck=1;
            }
            if(ck==1 && low>=p)
                low = p;
        }
        if(low<10001){
            low=n*low;
            if(b>=low)
                cout<<low<<endl;
            else
                printf("stay home\n");
        }
        else
            printf("stay home\n");
    }
    return 0;
}
