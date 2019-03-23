#include <bits/stdc++.h>
typedef long long int lng;

using namespace std;

lng reverse(lng num)
{
    lng temp=0,remainder;
    while(num!=0){
        remainder = num%10;
        temp = temp*10 + remainder;
        num/=10;
    }
    return temp;
}
int main()
{
    lng num,tst,sum,reverse_num;
    scanf("%lld",&tst);
    while(tst--){
        int count = 0;
        scanf("%lld",&num);
        reverse_num = reverse(num); //1st reversing
        sum = reverse_num + num;
        count++;
        reverse_num = reverse(sum);  //2nd time reversing
        while(reverse_num != sum){
            sum+=reverse_num;
            count++;
            reverse_num = reverse(sum);
        }
        printf("%d %lld\n",count,sum);
    }
    return 0;
}
