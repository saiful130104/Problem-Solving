#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(getline(cin,str)){
        int ck=0,count=0;
        str+=" a";
        for(int i=0; str[i]!='\0'; i++){
            if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
                ck=1;
            else{
                if(ck)
                    count++,ck=0;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
