#include <bits/stdc++.h>

using namespace std;

bool palindrome(string str);

int main()
{
    string str,check_str="DONE",pal_str = "You won't be eaten!";
    while(getline(cin,str)){
        if(str==check_str)
            return 0;
        int len = str.length(),j=0;
        for(int i=0; i<len; i++){
            if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
               if(str[i]>='A' && str[i]<='Z')
                    str[j++] = str[i] + 'a' - 'A';
                else
                    str[j++]=str[i];
            }
        }
        str.erase(j,len);
        if(palindrome(str))
        cout<<pal_str<<endl;
        else
            printf("Uh oh..\n");
    }
    return 0;
}

bool palindrome(string str)
{
    int len=str.length();
    for(int i=0; i<len/2; i++){
        if(str[i] != str[len-1-i]){
            return 0;
        }
    }
    return 1;
}
