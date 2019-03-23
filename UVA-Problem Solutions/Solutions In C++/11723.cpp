#include<iostream>
#include<cmath>
#include <cstdio>

using namespace std;

int main()
{
    int r,n,test_case=1;
    while(cin>>r>>n){
            if(r==0 && n==0)
                return 0;
            if(r<=n)
                printf("Case %d: 0\n",test_case++);
            else{
                r = r - n;
                if(r%n==0){
                        if(r/n>26)
                            printf("Case %d: impossible\n",test_case++);
                        else
                            printf("Case %d: %d\n",test_case++,r/n);
                    }
                else{
                    if(r/n<26)
                        printf("Case %d: %d\n",test_case++,(r/n +1));
                    else
                        printf("Case %d: impossible\n",test_case++);
                }
            }
    }

    return 0;
}
