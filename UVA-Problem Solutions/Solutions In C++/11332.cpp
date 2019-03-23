#include <cstdio>
#include <bits\stdc++.h>

using namespace std;

int digit_count(long long int N)
{
    long long int i,j,s;
    while(N>9){
        i=N,s=0;
        while(i!=0){
           i = N/10;
           s = s + N%10;
           N = i;
        }
        N = s;
    }

    return N;

}

int main()
{
    long long int n;
    int j;
    while(1){
        scanf("%lld",&n);
        if(n>0){
            j = digit_count(n);
            cout<<j<<endl;
        }
        else
            return 0;
    }

    return 0;
}
