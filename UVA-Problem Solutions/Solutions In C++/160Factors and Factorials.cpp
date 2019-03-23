#include <bits/stdc++.h>

using namespace std;
map<long,long>mp;
int main()
{
    //freopen("int.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long n,save;
    long primes[]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    while (scanf ("%ld", &n))
    {
        if(n==0) return 0;
       // printf("%3d! =",n);
        save = n;
        long count,i,j;
        while(n>1)
        {
            j=0,i=n;
            while(i>1)
            {
                if(i%primes[j]==0)
                {
                    while(i%primes[j]==0)
                    {
                        i/=primes[j];
                        mp[primes[j]]++;
                        if(i==1) break;
                    }
                }
                j++;
            }
            n--;
        }
        j=0;
        printf("%3ld! =", save);
        for(i=0; i<25; i++)
        {
            if(mp[primes[i]]!=0)
            {
                if(j==15)
                printf("\n%6c",' ');
                printf("%3ld",mp[primes[i]]);
                j++;
            }
        }
        cout<<endl;
        mp.clear();
    }
    return 0;
}
