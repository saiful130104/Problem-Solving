#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int test,player_num,result,test_case=1;
    cin>>test;
    while(test--){
        cin>>player_num;
        int player[player_num];
        for(int i=0; i<player_num;i++)
            cin>>player[i];
        printf("Case %d: %d\n",test_case++,player[player_num/2]);
    }

    return 0;
}
