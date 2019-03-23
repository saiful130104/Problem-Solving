///prblm link: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=&problem=1552&mosmsg=Submission+received+with+ID+17368400
///10611 - The Playboy Chimp
#include <cstdio>
#include <iostream>
#include <bits/stdc++.h>
#define max 50005

typedef long long int LL;
using namespace std;
LL ara[max];
LL strt,mid,last,i,j,target,N,Target,n,ans;
LL binary(LL N,LL Target)
{
    strt = 1;
    last = N;
    while(strt<=last){
        mid = (strt+last)/2;
        if(Target>ara[mid]){
            ans=mid;
            strt = mid+1;
        }
        else
            last = mid-1;
    }
    return ans;
}

LL binary1(LL N,LL Target)
{
    strt = 1;
    last = N;
    while(strt<=last){
        mid = (strt+last)/2;
        if(Target<ara[mid]){
            ans=mid;
            last = mid-1;
        }
        else
            strt = mid+1;
    }
    return ans;
}
int main()
{
    LL place,llm,ulm,q;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>ara[i];
    cin>>q;
    while(q--)
    {
    cin>>target;
    if(ara[1]>=target)
        printf("X");
    else{
        llm = binary(n,target);
        cout<<ara[llm];
    }
    printf(" ");
    if(ara[n]<=target)
        printf("X");
    else{
        ulm = binary1(n,target);
        cout<<ara[ulm];
    }
    printf("\n");
    }
    return 0;
}
