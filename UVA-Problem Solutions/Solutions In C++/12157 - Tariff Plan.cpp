#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("int.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int mile,juice,a,b,n,tst,cs=1;
    cin>>tst;
    while(tst--){
        mile=juice=0;
        cin>>n;
        while(n--){
            cin>>a;
            int i,j;
            i=a+1;
            j=i/30;
            if(i%30!=0)
                j++;
            mile+= j*10;
            j=i/60;
            if(i%60!=0)
                j++;
            juice+=(j*15);
        }
        if(mile<juice)
            cout<<"Case "<<cs++<<": Mile "<<mile<<endl;
        else if(juice<mile)
            cout<<"Case "<<cs++<<": Juice "<<juice<<endl;
        else
            cout<<"Case "<<cs++<<": Mile Juice "<<juice<<endl;
    }


    return 0;
}

