#include <bits/stdc++.h>
#define mod 131071

using namespace std;
typedef long long lng;

int main()
{
    char ch;
    int rem=0;
    while(cin>>ch){
        if(ch=='#'){
            if(rem)
                printf("NO\n");
            else
                printf("YES\n");
            rem = 0;
        }
       else if(ch!='\n'){
            rem = (rem*2 + ch -'0')% 131071;
       }
    }
    return 0;
}
