#include <bits/stdc++.h>


using namespace std;

int main()

{
    double h,m,ans;
    while(scanf("%lf:%lf",&h,&m))
    {
        if(h==0 && m==0) break;
        h = h*30;
        m = 5.5*m;
        ans = abs(h-m);
        if(ans>180) ans=360-ans;
        printf("%.3lf\n",ans);
    }
    return 0;
}
