            ///Bismillahir Rahmanir Rahim
            /// #Saiful_Islam <stdio.R>
            ///Jessore University of Science & Technology,CSE_14
            ///isaifulislam123@gmail.com
            ///isaifulislam123@yahoo.com

#include <bits/stdc++.h>
#define sf scanf
#define pf printf
#define scl1(a) sf("%lld",&a)  ///single long long int input
#define scf(a) sf("%f",&a)      ///single float input
#define scd(a) sf("%lf",&a)      ///single double input
#define scd2(a,b) sf("%lf%lf",&a,&b)      ///single double input
#define scd3(a,b,c) sf("%lf%lf%lf",&a,&b,&c)      ///single double input
#define scl2(a,b) sf("%lld%lld",&a,&b)
#define scl3(a,b,c) sf("%lld%lld%lld",&a,&b,&c)
#define sci1(a) sf("%d",&a)       ///single int input
#define sci2(a,b) sf("%d%d",&a,&b)
#define sci3(a,b,c) sf("%d%d%d",&a,&b,&c)
#define csprint(a) pf("Case %d: ",a++)
#define prl1(a) pf("%lld",a)
#define prl2(a,b) pf("%lld %lld",a,b)
#define pri1(a) pf("%d",a)
#define pri2(a,b) pf("%d %d",a,b)
#define spaceprint pf(" ")
#define lineprint pf("\n")
#define infile freopen("int.txt","r",stdin)
#define outfile freopen("out.txt","w",stdout)
#define MX 1000009
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

vector<int>primelist;
bool mark[MX];
void seive()    ///10^6 range
{
    int sq = sqrt(MX);
    mark[0]=mark[1]=1;
    for(int i=4; i<MX; i+=2)
        mark[i]=1;
    for(int i=3; i<sq+2;i+=2)
    {
        if(!mark[i])
        {
            for(int j=i*i; j<MX; j+=i*2)
                mark[j]=1;
        }
    }
    primelist.pb(2);
    for(int i=3;i<MX; i+=2)
        if(!mark[i])
        primelist.pb(i);
}

lng fib[103];

lng sum_cal(string n)
{
    int len = n.size()-1,j=0;
    lng sum=0;
    for(int i=len; i>=0; i--,j++)
        if(n[i]=='1')
            sum+=fib[j];
    return sum;
}

int main()

{
    //infile;
    //outfile;
    //seive();
    fib[0]=1;
    fib[1]=2;
    for(int i=2; i<101; i++)
        fib[i]=fib[i-1]+fib[i-2];
    string n1,n2;
    int cs=1;
    while(cin>>n1>>n2)
    {
        if(cs>1)
            lineprint;
        cs++;
        lng sum = sum_cal(n1) + sum_cal(n2);
        int i=0;
        while(sum>fib[i])
            i++;
        if(sum<fib[i] && i>0)
            i--;
        string num = "";
        for(int j=i; j>=0; j--)
        {
            if(sum>=fib[j])
                num+='1',sum-=fib[j];
            else
                num+='0';
        }
        cout<<num;
        lineprint;
    }
    return 0;
}

