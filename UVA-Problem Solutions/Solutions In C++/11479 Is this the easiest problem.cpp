///problem link:https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=26&problem=2474&mosmsg=Submission+received+with+ID+17257174
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,ans,test,cs=1;
    cin>>test;
    while(test--){
        cin>>a>>b>>c;
        if(a<=0 || b<=0 || c<=0)
            printf("Case %d: Invalid\n",cs++);

       else if(a==b && b==c)
            printf("Case %d: Equilateral\n",cs++);

        else if((a==b && a!=c) || (a==c && a!=b) || (b==c & b!=a)){
            if(a>=b && a>=c){
            ans = a - (b+c);
            if(ans>=0)
               printf("Case %d: Invalid\n",cs++) ;
               else
                printf("Case %d: Isosceles\n",cs++) ;
           }
           else if(c>=b && c>=a){
                ans = c - (b+a);
                if(ans>=0)
                   printf("Case %d: Invalid\n",cs++) ;
                   else
                printf("Case %d: Isosceles\n",cs++) ;
           }
            else if(b>=c && b>=a){
                ans = b - (c+a);
                if(ans>=0)
                   printf("Case %d: Invalid\n",cs++) ;
                else
                printf("Case %d: Isosceles\n",cs++) ;
                }
            else
                printf("Case %d: Isosceles\n",cs++) ;
        }
       else if(a>=b && a>=c){
            ans = a - (b+c);
            if(ans>=0)
               printf("Case %d: Invalid\n",cs++) ;
               else
                    printf("Case %d: Scalene\n",cs++) ;
           }
           else if(c>=b && c>=a){
                ans = c - (b+a);
                if(ans>=0)
                   printf("Case %d: Invalid\n",cs++) ;
                else
                    printf("Case %d: Scalene\n",cs++) ;
           }
            else if(b>=c && b>=a){
                ans = b - (c+a);
                if(ans>=0)
                   printf("Case %d: Invalid\n",cs++) ;
                else
                    printf("Case %d: Scalene\n",cs++) ;
                }
        else
            printf("Case %d: Scalene\n",cs++) ;
       }

    return 0;
}


