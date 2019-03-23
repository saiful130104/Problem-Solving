#include <bits/stdc++.h>

using namespace std;
/*long long int recursion_les(long long int n)
{
    if(n<=100)
        return recursion_les(recursion_les(n+11));
    else
        return (n-10);
}*/

int main()
{
   int n;
    while(scanf("%d",&n)==1){
        if(n<1)
                break;
        if(n<101)
            cout<<"f91("<<n<<") = 91"<<endl;
        else
            cout<<"f91("<<n<<") = "<<n-10<<endl;
    }
    /*long long n,cs=0,res;
    while(scanf("%lld",&n)==1){
        if(n<1)
        break;
        if(cs)
            printf("\n");
        res = recursion_les(n);
        printf("f91(%lld)  =  %lld",n,res);
        cs++;
    }*/
    return 0;
}
