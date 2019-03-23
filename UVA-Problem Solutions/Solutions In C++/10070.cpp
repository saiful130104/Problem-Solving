#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("int.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    char year[100002];
    int line=0;
    while(scanf("%s",&year) != EOF){

        int ck,n4,n100,n400,n15,n55;
        ck=n4=n100=n400=n15=n55=0;
        int len;
        len = strlen(year);
        if(line>0)
            cout<<endl;
        line++;
        for(int i=0; i<len; i++){
            n4=((n4*10) + year[i] - '0')%4;
            n100=((n100*10) + year[i] - '0')%100;
            n400=((n400*10) + year[i] - '0')%400;
            n15=((n15*10) + year[i] - '0')%15;
            n55=((n55*10) + year[i] - '0')%55;
        }
        if((!n4 && n100) || !n400){
            cout<<"This is leap year."<<endl;
            ck=1;
            if(!n15)
            cout<<"This is huluculu festival year."<<endl;
            if(!n55)
            cout<<"This is bulukulu festival year."<<endl;
        }

        if(!n15 && !ck){
            cout<<"This is huluculu festival year."<<endl;
            ck=1;
        }

        if(!ck)
            cout<<"This is an ordinary year."<<endl;
    }

    return 0;
}
