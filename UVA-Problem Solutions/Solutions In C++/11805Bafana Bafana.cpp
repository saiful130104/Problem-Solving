#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tst,n,k,p,cs=1;
    cin>>tst;
    while(tst--){
        cin>>n>>k>>p;
        int strt=k;
        for(int i=0; i<p; i++){
            if(strt==n)
                strt=0;
            strt++;
        }
        cout<<"Case "<<cs++<<": "<<strt<<endl;
    }
    return 0;
}
