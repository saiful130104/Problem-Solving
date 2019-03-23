#include <bits/stdc++.h>

using namespace std;

map<char,int>mp;
void mapset()
{
    char ch;
    int i=1;
    for(ch ='a'; ch<='z'; ch++,i++){
        if(ch=='s' || ch=='z')
            i=4;
        mp[ch] = i;
        if(i>2)
            i=0;
    }
    ch =' ';
    mp[ch]=1;
}
int main()
{
    mapset();
    int tst,cs=1;
    string str;
    scanf("%d",&tst);
    cin.ignore();
    while(tst--){
        getline(cin,str);
        int len = str.length() , sum=0;
        for(int i=0; i<len; i++)
            sum+=mp[str[i]];
        printf("Case #%d: %d\n",cs++,sum);
    }
    return 0;
}
