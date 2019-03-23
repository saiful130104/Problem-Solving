#include <bits/stdc++.h>

using namespace std;
typedef long long lng;
int main()
{
    //freopen("int.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    lng n,k;
    while(1){
        cin>>n;
        if(n==0)
            return 0;
        k=sqrt(n);
        int time_left = n - (k*k);
        int x,y;
        if(k&1){
            if(n==k*k)
                x=1,y=k;
            else if((k+1)>=time_left)
                x=time_left,y=k+1;
            else
                x = k+1, y = 2*(k+1) - time_left;
        }
        else{
            if(n==k*k)
                x=k,y=1;
            else if((k+1)>=time_left)
                y=time_left,x=k+1;
            else
                y = k+1, x = 2*(k+1) - time_left;
        }
        cout<<x<<" "<<y<<endl;
    }

    return 0;
}
