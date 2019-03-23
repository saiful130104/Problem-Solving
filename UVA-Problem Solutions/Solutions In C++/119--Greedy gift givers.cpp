#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string,int>mp;
    string str,str1[100];
    int tst,give_amount,receiver,cs=0;
    while(scanf("%d",&tst) == 1){
        for(int i=1; i<=tst; i++){
            cin>>str;
            str1[i]=str;
            mp[str] = 0;
        }
        for(int i=1; i<=tst; i++){
            cin>>str;
            scanf("%d%d",&give_amount,&receiver);
            if(receiver>0){
                int total_give,per_receive;
                per_receive = give_amount/receiver;
                total_give = per_receive*receiver;
                mp[str]-=total_give;
                while(receiver--){
                    cin>>str;
                    mp[str]+=per_receive;
                }
            }
        }
        if(cs!=0)
            cout<<endl;
        for(int i=1; i<=tst; i++)
            cout<<str1[i]<<" "<<mp[str1[i]]<<endl;
        cs++;
    }
    return 0;
}
