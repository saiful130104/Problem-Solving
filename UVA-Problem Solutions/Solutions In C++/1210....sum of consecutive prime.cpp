#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int i,j;
bool prm[10000];
int arprm[1250];
void is_prime(){
    for(i=4; i<=10000; i+=2)
        prm[i]=1;
    for(i=3; i<=100; i+=2){
        if(prm[i]==0){
            for(j=i*i; j<=10000; j+=i)
                prm[j]=1;
        }
    }
    arprm[0]=2;
    for(i=3,j=0;i<=10000; i+=2){
        if(prm[i]==0){
            arprm[++j]=i;
        }
    }
}
int main()
{
    int a,b,c,sum,p,q;
    is_prime();
    while(1){
        cin>>a;
        if(a==0)
            return 0;
        sum=0;
        c=0;
        for(p=0; p<=j;p++){
            if(arprm[p]>=a)
                break;
        }
        q=p;
        while(p>=0){
            c+=arprm[p--];
            if(c>a)
                c-=arprm[q--];
            if(c==a){
                c-=arprm[q--];
                sum++;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}

