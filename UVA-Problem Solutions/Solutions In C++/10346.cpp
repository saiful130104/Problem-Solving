#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   long long int num,k,tempk,sum;

    while(scanf("%lld%lld",&num,&k)!= EOF){
        sum=num;
        tempk = k;
        while(num>=tempk){

            k = num%tempk;
            num=num/tempk;
            sum+=num;
            num+=k;
        }
        cout<<sum<<endl;
    }
    return 0;
}
