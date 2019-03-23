            ///Bismillahir Rahmanir Rahim
            /// #Saiful_Islam <stdio.R>
            ///Jessore University of Science & Technology,CSE_14
            ///isaifulislam123@gmail.com
            ///isaifulislam123@yahoo.com

#include <bits/stdc++.h>

#define scl1(a) scanf("%lld",&a)  ///single long long int input
#define scf(a) scanf("%f",&a)      ///single float input
#define scd(a) scanf("%lf",&a)      ///single double input
#define scl2(a,b) scanf("%lld%lld",&a,&b)
#define scl3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define sci1(a) scanf("%d",&a)       ///single int input
#define sci2(a,b) scanf("%d%d",&a,&b)
#define sci3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define csprint(a) printf("Case %d: ",a++)
#define prl1(a) printf("%lld",a)
#define prl2(a,b) printf("%lld %lld",a,b)
#define pri1(a) printf("%d",a)
#define pri2(a,b) printf("%d %d",a,b)
#define spaceprint printf(" ")
#define lineprint printf("\n")
#define infile freopen("int.txt","r",stdin)
#define outfile freopen("out.txt","w",stdout)
#define mx 1000009
#define pi acos(-1.0)
#define inf 1<<31
#define fs first
#define sc second
#define pb(a) push_back(a)
#define ppb pop_back()

///#define area of a polygon inside a circle (1/2)*n*r*r*(sin(2*pi)/n)
using namespace std;
typedef long long int lng;

string make_equal(string num,int len);
string make_same(string num,int len);

void string_addition(string num1,string num2)  ///reverse 2 numbers and add and reverse again
{
    int len1=num1.size(),len2=num2.size(),sum=0,carry=0,ck=0;
    if(len1<len2)
        num1 = make_equal(num1,len2-len1);
    else if(len2<len1)
        num2 = make_equal(num2,len1-len2);
    len1 = max(len1,len2);
    for(int i=0; i<len1; i++)
    {
        sum = (carry + (num1[i]-48)+(num2[i]-48))%10;
        if(sum)
            ck=1;
        if(ck)
            printf("%d",sum);
        carry = (carry + (num1[i]-48)+(num2[i]-48))/10;
    }
    if(carry>0)
        printf("%d",carry);
}

string string_add(string num1, string num2)  ///add two string number
{
    int len1=num1.size(),len2=num2.size(),carry=0;
    string sum="";
    if(len1<len2)
        num1 = make_same(num1,len2-len1);
    else if(len2<len1)
        num2 = make_same(num2,len1-len2);
    len1 = max(len1,len2);
    for(int i=len1-1; i>=0; i--)
    {
        int x = (carry + (num1[i]-48)+(num2[i]-48));
        sum = (char)(x%10 + 48)+sum;
        carry = x/10;
    }
    if(carry>0)
        sum = (char)(carry+48)+sum;
    return sum;
}

string make_same(string num,int len) ///add 0 at the first position to make same length
{
    for(int i=0; i<len; i++)
        num = '0'+num;
    return num;
}

string make_equal(string num, int len) ///add 0 at the last position to make equal
{
    for(int i=0; i<len; i++)
        num+='0';
    return num;
}
lng GCD(lng a,lng b)
{
    while(b)
        b ^= a ^= b ^= a%= b;
    return a;
}

string int_to_string(lng n)    ///making an integer value as string
{
    string num = "";
    while(1)
    {
        int rem=n%10;
        num = (char)(rem+48) + num;
        n/=10;
        if(!n)
            return num;
    }
}

string tobin(lng n)  ///converting a decimal number to a binary number and storing like string
{
    string bin = "";
    while(n)
    {
        bin = (char)(n % 2 + 48) + bin;
        n >>= 1;
    }
    return bin;
}

lng todec(string str)  ///converting a binary(string) number to a decimal number
{
    lng ans=0;
    lng len = str.size(),j=1;
    for(int i=len-1; i>=0; i--,j*=2)
        ans+=(str[i]-48)*j;
    return ans;
}

int primelist[mx+1],th_prime;
bool mark[mx];
void seive()
{
    int sq = sqrt(mx);
    mark[0]=mark[1]=1;
    for(int i=4; i<mx; i+=2)
        mark[i]=1;
    for(int i=3; i<sq+2;i+=2)
    {
        if(!mark[i])
        {
            for(int j=i*i; j<mx; j+=i*2)
                mark[j]=1;
        }
    }
    for(int i=3;i<mx; i+=2)
        if(!mark[i])
        primelist[++th_prime]=i;
}

int main()

{
    //infile;
    //outfile;
    //seive();
    string str = "BUSPFTM";
    map<char,int>mp;
    mp['B']=1;
    mp['U']=10;
    mp['S']=100;
    mp['P']=1000;
    mp['F']=10000;
    mp['T']=100000;
    mp['M']=1000000;
    int tst;
    sci1(tst);
    cin.ignore();
    while(tst--)
    {
        map<char,int>mmp;
        string msg,ckmsg="";
        getline(cin,msg);
        lng sum = 0;
        int len = msg.size(),ck=1;
        ckmsg = ckmsg+msg[0];
        for(int i=0; i<len;i++)
        {
            if(i)
                if(msg[i]!=msg[i-1])
                ckmsg = ckmsg + msg[i];
            mmp[msg[i]]++;
            if(mmp[msg[i]]>9)
            {
                cout<<"error";
                    ck=0;
                break;
            }
        }
        if(ck)
        {
            int siz=ckmsg.size(),ck2=1,i=1;
            if(siz>1)
            {
                if(mp[ckmsg[i]]>mp[ckmsg[i-1]])
                    while(mp[ckmsg[i]]>mp[ckmsg[i-1]])
                    {
                        i++;
                        if(i==siz)
                            break;
                    }
                else
                    while(mp[ckmsg[i]]<mp[ckmsg[i-1]])
                    {
                        i++;
                        if(i==siz)
                            break;
                    }
                if(i<siz)
                {
                    cout<<"error";
                    ck2=0;
                }
            }
            if(ck2)
            {
                for(int i=0;i<7;i++)
                {
                    if(mmp[str[i]])
                    {
                        lng n = mmp[str[i]]*mp[str[i]];
                        sum+=n;
                    }
                }
                cout<<sum;
            }
        }
        lineprint;
    }
    return 0;
}

