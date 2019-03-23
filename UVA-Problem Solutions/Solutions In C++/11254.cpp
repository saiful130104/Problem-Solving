#include  <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int summation(int A, int N)
{

   int res = (N*(N-1 + 2*A))/2;
   return res;
}
int length(int A, int N)
{
    for(int j=1;j<N;j++)
        A++;
    return A;

}

int main()
{
    freopen("int.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int num,n,a,temp,sum,i;

    while(1){
        scanf("%d",&num);
        if(num<0)
            return 0;
        else{
            temp=0;
            for(i =1;i<num/2+1 && temp!=1;i++){
                for(n=1;n<num/2+1;n++){
                    sum = summation(i,n);
                    if(sum==num){
                        temp=1;
                        n=length(i,n);
                        cout<<num<<" = "<<i<<" + ... + "<<n<<endl;
                        break;
                    }
                }
            }
            if(temp==0)
                cout<<num<<" = "<<num<<" + ... + "<<num<<endl;
        }
    }
    return 0;
}
