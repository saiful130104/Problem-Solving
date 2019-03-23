#include <bits/stdc++.h>

using namespace std;
typedef long long int lng;

string tobin(lng n)
{
    string r = "";
    while(n)
    {
        r = (char)(n % 2 + 48) + r;
        n >>= 1;
    }
    return r;
}

lng todec(string str)
{
    lng ans=0;
    lng len = str.size(),j=1;
    for(int i=len-1; i>=0; i--,j*=2)
        ans+=(str[i]-48)*j;
    return ans;
}

int main()
{

    lng n,a,b;
    while(cin>>n>>a>>b)
    {
        if(a>b)
            swap(a,b);
//        lng mx=a,aa=a,ans,num=a;
//        while(aa<=b)
//        {
//            ans = aa|n;
//            if(mx<ans)
//                num=aa;
//            mx=max(mx,ans);
//            aa++;
//        }
//        cout<<"ans = "<<num<<" = "<<tobin(num)<<endl;
//        cout<<n<<" = "<<tobin(n)<<endl;
//        cout<<a<<" = "<<tobin(a)<<endl;
//        cout<<b<<" = "<<tobin(b)<<endl;
        string strn,stra,strb,strans="\0";
        strn = tobin(n);
        stra = tobin(a);
        strb = tobin(b);
        int len = strb.size();
        while(len>strn.size())
            strn = '0'+strn;
        while(len>stra.size())
            stra = '0'+stra;
//        cout<<" strn = "<<strn<<endl;
//        cout<<" stra = "<<stra<<endl;
//        cout<<" strb = "<<strb<<endl;
        int lenn = strn.size();
        lng i=0,j=0,ck=0;
       lng num=1LL;
        if(lenn>len)
            j=lenn-len;
        while(i<len)
        {

            if(strn[j]=='1')
            {
                if(stra[i]=='0' || num>a)
                    strans += '0';
                else
                {
                    strans += '1';
                    if(!ck)
                        num<<=(len-i)-1;
                    else
                        num|=1<<(len-i)-1;
                    ck=1;
                    //cout<<"NUM = "<<num<<endl;
                }
            }
            else
                {
                    if(!ck)
                        num<<=(len-i)-1;
                    else
                        num|=1<<(len-i)-1;
                    ck=1;
                    //cout<<"NUM = "<<num<<endl;
                    if(num>b)
                    {
                        strans += '0';
                        num^=1<<(len-i)-1;
                    }
                    else
                        strans += '1';
                }
            i++,j++;
        }
        //cout<<strans<<endl;
        //cin.ignore();
        //getline(cin,str);
        cout<<strans<<" = "<<todec(strans)<<endl;
    }

    return 0;
}



