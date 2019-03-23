#include <stdio.h>
int length (long long int a ,long long int b)
{

    if (a == 1)
        return b;
    else if (a%2 == 0)
        a/=2;
    else
        a = (a*3) + 1;
    b++;
    return length(a,b);
}


int main()
{
    long long int max , i , j , p , n , d, l,q,max1;
    while(scanf("%lld%lld",&i,&j) != EOF){

        if(j > i){
            n = j - i;
            p = i ;
        }
        else{
            n = i - j ;
            p = j ;
        }
        for(l=0,max1 = 1; l<=n; l++,p++){
            d = 1;
            q = length(p,d);
            if(q>max1)
                max = q;
            else
                max = max1;
            max1 = max ;
        }
    printf("%lld %lld %lld\n",i,j,max);
    }
    return 0;
}

