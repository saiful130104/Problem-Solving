#include <bits/stdc++.h>

using namespace std;
typedef long long int lng;

int main()
{
    int n,tst,swap_num;
    cin>>tst;
    while(tst--)
    {
        swap_num=0;
        cin>>n;
        int ara[n+1];
        for(int i=1; i<=n; i++) cin>>ara[i];
        for(int i=1; i<=n; i++)
        {
            for(int j=i+1; j<=n; j++)
                if(ara[i] > ara[j]) swap(ara[j],ara[i]),swap_num++;;
        }
        printf("Optimal train swapping takes %d swaps.\n",swap_num);
    }
    return 0;
}
