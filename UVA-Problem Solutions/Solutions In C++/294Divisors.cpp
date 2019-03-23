#include <bits/stdc++.h>

using namespace std;
typedef long long int lng;

vector <lng> prime;
bool mark[10000002];

void seive(lng mmx)
{
    lng i,j,limit = sqrt(mmx);
    mark[1]=1;
    for(i=4; i<=mmx; i+=2) mark[i]=1;
    prime.push_back(2);
    for(i=3; i<=mmx; i+=2){
        if(!mark[i]){
            prime.push_back(i);
            if(i<=limit)
                for(j=i*i; j<=mmx; j+=i*2) mark[j] = 1;
        }
    }
}

lng DivCounter(lng n){
    if(n==1) return 1;
    lng div=1,len = sqrt(n);
    for(lng i=0; i<=len; i++){
        if(n%prime[i]==0){
            lng cnt=1;
            while(n%prime[i]==0){
                n/=prime[i];
                cnt++;
            }
            div *= cnt;
        }
    }
    if(n>1)div*=2;
    return div;
}

int main()
{
    //freopen("int.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    seive(10000000);
    lng tst,l,h,n,mx,res;
    cin>>tst;
    while(tst--)
    {
        mx=0;
        cin>>l>>h;
        for(lng i=l; i<=h; i++)
        {
            res=DivCounter(i);
            if(mx<res) mx=res,n=i;
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,h,n,mx);
    }

    return 0;
}
