#include <bits/stdc++.h>
#define llscan(a) scanf("%lld",&a)
#define iiscan(a) scanf("%d",&a)
#define csprint(a) printf("Case %d: ",a++)
#define llprint(a) printf("%lld",a)
#define iiprint(a) printf("%d",a)
#define spaceprint printf(" ")
#define lineprint printf("\n")
#define infile freopen("int.txt","r",stdin)
#define outfile freopen("out.txt","w",stdout)

using namespace std;
typedef long long int lng;

int main()

{

    int cs=1,a,b,c,tst;
    iiscan(tst);
    cin.ignore();
    while(tst--)
    {
        string paren;
        char ch;
        int ck=1;
        getline(cin,paren);
        stack<char>st;
        int len = paren.size();
        for(int i=0; i<len; i++)
        {
            if(paren[i]=='(' || paren[i]=='[')
                st.push(paren[i]);
            else
            {
                if(st.size()==0)
                {
                    printf("No\n");
                    ck=0;
                    break;
                }
                ch = st.top();
                st.pop();
                if(paren[i]==')' && ch == '(')
                    continue;
                if(paren[i]==']' && ch == '[')
                    continue;
                printf("No\n");
                ck=0;
                break;
            }
        }
        if(ck)
        {
            if(st.size()==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }

    return 0;
}



