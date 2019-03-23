#include <cstdio>
#include <cmath>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int test,n,m,result,testcase=1,a,b,ara[100000];;
    cin>>test;
    while(test--){
        cin>>m>>n;
        result=0;
        for(int i=0;i<n;i++)
            ara[i]=0;
        for(int i = 0;i<=n;i++){
            cin>>a>>b;
            if(ara[a] ==0){
                ara[a]=1;
                result++;

            }
        }
        printf("Case %d: %d\n",testcase++,result);
    }

    return 0;
}
