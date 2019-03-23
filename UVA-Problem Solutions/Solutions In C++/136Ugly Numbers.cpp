#include <bits/stdc++.h>

using namespace std;
typedef long long int lng;

lng ara[2000];
void seive()
{
    int index=1,a=2,b=2,c=2,x=2,y=3,z=5;
    ara[index]=1;
    while(!ara[1500])
    {
        if(x<y && x<z)
        {
            ara[++index]=x;
            x = ara[a++]*2;
        }
        else if(y<x && y<z)
        {
            ara[++index]=y;
            y = ara[b++]*3;
        }
        else if(z<x && z<y)
        {
            ara[++index]=z;
            z = ara[c++]*5;
        }
        if(x==y)
            x = ara[a++]*2;
        else if(y==z)
            y = ara[b++]*3;
        else if(z==x)
            z = ara[c++]*5;
    }
}
int main()
{
    seive();
    cout<<"The 1500'th ugly number is "<<ara[1500]<<"."<<endl;
    return 0;
}
