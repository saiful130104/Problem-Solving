# DSU-disjoint-set-union-
C++ Raw code for DSU

#include<bits/stdc++.h>
#define sc scanf
#define sfi(a) sc("%d",&a)
#define sfi2(a,b) sc("%d%d",&a,&b)
#define sfl(a) sc("%lld",&a)
#define sfl2(a,b) sc("%lld%lld",&a,&b)
#define mset(ara,value) memset(ara,value,sizeof(ara))

using namespace std;
typedef long long int lng;

int parent[30004],Size[30004];

int Find(int x)
{
    if(parent[x]==x) return x;
    return parent[x] = Find(parent[x]);
}

void solve()
{
   int n,p;
   sfi2(n,p);
   for(int i=0; i<=n; i++) parent[i]=i,Size[i]=1;
    int ans = 1;
   for(int i=0; i<p; i++)
   {
       int a,b;
       sfi2(a,b);
       int u = Find(a);
       int v = Find(b);
        if(u != v)                                ///if u and v are not same then they make a new child of the parent set
        {
            parent[u] = v;
            Size[parent[u]] += Size[u];           ///size[i] carry the size this u and v sets
            ans = max(ans,Size[parent[u]]);       ///ans carry the maximum size in the set
        }
   }
   printf("%d\n",ans);
    return;
}

int main()
{
    int tst;
    sfi(tst);
    while(tst--)
        solve();
    return 0;
}
