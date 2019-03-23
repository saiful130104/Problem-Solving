#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,n,cs=1,count;
    while(1){
        cin>>n;
        if(n<0)
            break;
        a=1;
        count=0;
        while(a<n){
            a*=2;
            count++;
        }
        cout<<"Case "<<cs++<<": "<<count<<endl;
    }

    return 0;
}
