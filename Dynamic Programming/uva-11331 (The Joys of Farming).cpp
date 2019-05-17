#include<bits/stdc++.h>
#define pb push_back
#define mpr make_pair
#define pii pair<int,int>

using namespace std;
int s0,s1,vis_val;
bool vis[2003];
int color[2003];
bool isBicolorable(vector<int>node[],int src)
{
    int col=0,sz,tnode;
    queue<int>q;
    q.push(src);
    color[src]=0;
    vis[src] = 1;
    s0++;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        col=(color[u]+1)%2;
        sz = node[u].size();
        for(int i=0; i<sz; i++)
        {
            tnode = node[u][i];
            if(vis[tnode])
            {
                if(color[tnode] == color[u])
                    return 0;
                continue;
            }
            color[tnode] = col;
            vis[tnode] = 1;
            q.push(tnode);
            if(color[tnode])
                s1++;
            else
                s0++;
        }
    }
    return 1;
}

int n,dp[2001][1001],dpVis[2001][1001],dpVisVal;
vector< pii >coinVal;

bool way(int pos, int amount)
{
    if(pos>=n)
        return amount==0;
    if(dpVis[pos][amount]==dpVisVal)
        return dp[pos][amount];
    dpVis[pos][amount] = dpVisVal;
    int v1=0,v2=0,cv1=coinVal[pos].first,cv2=coinVal[pos].second;
    if(cv1<=amount)
        v1 = way(pos+1,amount-cv1);
    if(cv2<=amount)
        v2 = way(pos+1,amount-cv2);
    return dp[pos][amount] = v1|v2;
}

void solve()
{
    int b,c,e,u,v;
    scanf("%d%d%d",&b,&c,&e);
    vector<int>node[b+c+1];
    vector< pii >value;
    memset(color,0,sizeof(color));
    memset(vis,0,sizeof(vis));
    for(int i=0; i<e; i++)
    {
        scanf("%d%d",&u,&v);
        node[u].pb(v);
        node[v].pb(u);
    }
    int ck=0;
    for(int i=1; i<=b+c; i++)
    {
        if(!vis[i])
        {
            s1=0,s0=0;
            if(isBicolorable(node,i))
                value.pb(mpr(s0,s1));
            else
            {
                ck=1;
                break;
            }
        }
    }
    if(ck)
        printf("no\n");
    else
    {
        coinVal = value;
        n = coinVal.size();
        dpVisVal++;
        if(way(0,min(b,c)))
            printf("yes\n");
        else
            printf("no\n");
    }
    return;
}

int main()
{
    int tst;
    scanf("%d",&tst);
    while(tst--)
        solve();
    return 0;
}
