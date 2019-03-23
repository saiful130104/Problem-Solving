#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

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

        if(num==1)
            printf("%5d  DEFICIENT\n",num);
        else {
            int j,i,res=1;
            for(i=2;i<=sqrt(num);i++){
                if(num%i==0){
                    j = num/i;
                    res = res+i+j;
                    if(i==j)
                    res -= j;
                }
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

