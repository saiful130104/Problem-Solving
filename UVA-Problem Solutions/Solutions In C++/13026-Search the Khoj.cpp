#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str,strr;
    vector <string>st;
    int tst,cs=1,contact_list;
    scanf("%d",&tst);
    while(tst--){
        scanf("%d",&contact_list);
        while(contact_list--){
            cin>>str;
            st.push_back(str);
        }
        cin>>str;
        int size = st.size(),ck;
        printf("Case %d:\n",cs++);
        for(int i=0; i<size; i++){
            strr = st[i];
            ck=0;
            int len = strr.length();
            for(int j=0; j<len; j++){
                if(str[j] != strr[j])
                    ck++;
                if(ck>1)
                    break;
            }
            if(ck<2)
                cout<<strr<<endl;
            else
                continue;
        }
        st.clear();
    }
    return 0;
}
