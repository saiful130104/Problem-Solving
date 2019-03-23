#include <cstdio>
#include <cstring>
#include <bits/stdc++.h>
#define loop(i,n) for(i=0;i<n;i++)
using namespace std;
int main()
{
    int a,len,b,lstpos,n,fstpos;
    string str;
    while(getline(cin,str)){
        len = str.size();
        fstpos=0;
        loop(a,len){
            if(str[a]==' '){
                for(lstpos=a-1; lstpos>=fstpos; lstpos--)
                    cout<<str[lstpos];
                cout<<" ";
                fstpos = a+1;
            }
        }
        for(lstpos=len-1; lstpos>=fstpos; lstpos--)
                    cout<<str[lstpos];
        cout<<endl;
    }
    return 0;
}


