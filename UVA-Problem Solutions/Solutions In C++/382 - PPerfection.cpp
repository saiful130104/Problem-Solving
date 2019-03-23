#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int is_prime(int n)
{
    if(n<2)
        return 0;
    else if(n==2)
        return 1;
    else if(n%2==0)
        return 0;
    else{
        for(int i=3;i<sqrt(n);i+=2){
            if(n%i==0)
                return 0;
        }
        return 1;
    }
}

int main()
{
    cout<<"PERFECTION OUTPUT"<<endl;
    int num,prime,result;
    while(1){
        cin>>num;
        if(num==0){
            cout<<"END OF OUTPUT"<<endl;
            return 0;
        }
        if(prime==1 || num==1)
            printf("%5d  DEFICIENT\n",num);
        else {
            for(int i=2;i<num;i++){
                if(num%i==0){
                    result=i;
                    break;
                }
            }
            int res=1;
            for(int i =2;i<=num/result;i++){
                if(num%i==0)
                    res+=i;
            }
            if(res==num)
                printf("%5d  PERFECT\n",num);
            else if(res>num)
                printf("%5d  ABUNDANT\n",num);
            else
                printf("%5d  DEFICIENT\n",num);
        }
    }

    return 0;
}

