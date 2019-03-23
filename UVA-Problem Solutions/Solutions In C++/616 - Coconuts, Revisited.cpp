#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    long long int coconuts,people,tempn,tempcoconut;
    while(cin>>coconuts){
        if(coconuts<0)
            return 0;
       int j; people=0;
        for(int i=sqrt(coconuts)+1;i>=2 ;i--){
            tempcoconut = coconuts;
            for(j=1;j<=i;j++){
                if(tempcoconut%i !=1)
                    break;
                tempcoconut = tempcoconut - tempcoconut/i - 1;
            }
            if(j== i+1 && tempcoconut%i==0){
                people=1;
                cout<<coconuts<<" coconuts, "<<i<<" people and 1 monkey"<<endl;
                break;
            }
        }
        if(people==0)
            cout<<coconuts<<" coconuts, no solution"<<endl;
    }

    return 0;
}
