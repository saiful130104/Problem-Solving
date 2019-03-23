#include <bits/stdc++.h>

using namespace std;
typedef long long int lng;

int main()
{
    freopen("int.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    double h,u,s,f,sum,rise,day;

    bool ck;
    while(1)
    {
        sum=0,day=1;
        cin>>h>>u>>s>>f;
        if(h==0) break;
        f = u*f/100;
        while(1)
        {
            sum+=u;
            if(u>0)
                u-=f;
            if(sum>h)
                break;
            sum -= s;
            if(sum<0)
                break;
            day++;
        }
        if(sum>=h) cout<<"success on day "<<day<<endl;
        else cout<<"failure on day "<<day<<endl;
    }
    return 0;
}
