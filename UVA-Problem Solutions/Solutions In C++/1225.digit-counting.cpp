#include <cstdio>
#include<cmath>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int myArray[10],num,ctest,i,j,test;
    cin>>test;
    while(test--){
        cin>>num;
        for(i=0;i<10;i++)
            myArray[i]=0;
        for(ctest=1;ctest<=num;ctest++){
            j=ctest;
            while(j!=0){
                i=j%10;
                ++myArray[i];
                j/=10;
            }
        }
            for(i=0;i<10;i++){
                if(i>0)
                    cout<<" ";
                cout<<myArray[i];
            }
            cout<<endl;
    }
    return 0;
}

