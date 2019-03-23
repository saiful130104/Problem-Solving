#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    while(n--){
        ll t=9,low=0,big=0,ck;
        scanf("%lld",&ck);
        while(t--){
            ll a;
            scanf("%lld",&a);
            if(ck<a)
                low++;
            else
                big++;
            ck=a;
        }
        if(low>=1 && big>=1)
            cout<<"Unordered"<<endl;
        else
            cout<<"Ordered"<<endl;
    }

    return 0;
}
