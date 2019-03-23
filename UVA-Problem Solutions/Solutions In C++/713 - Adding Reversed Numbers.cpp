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

using namespace std;

void bigintsum(string str1, string str2)
{
    string sum="";
    int i=0,n,carry=0,siz = str1.size();
    while(i<siz){
        n = (str1[i]-'0') + (str2[i++]-'0') + carry;
        sum += (n%10 +'0');
        carry = n/10;
        n=carry;
    }
    if(n)
        sum+=(n+'0');
    i=0;
    while(sum[i]=='0')
        i++;
    sum.erase(0,i);
    cout<<sum<<endl;
}
string make_equal(string str1, string str2)
{
    int siz1 = str1.size();
    int siz2 = str2.size();
    while(siz1<siz2)
        str1+='0',siz1++;
    return str1;
}
int main()
{
    int tst;
    sci1(tst);
    cin.ignore();
    while(tst--)
    {

        string n1,n2,sum;
        cin>>n1>>n2;
        int len1=n1.size();
        int len2=n2.size();
        if(len1!=len2)
        {
            if(len1>len2)
                n2 = make_equal(n2,n1);
            else
                n1 = make_equal(n1,n2);
        }
        bigintsum(n1,n2);
    }

    return 0;
}



