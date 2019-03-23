#include<bits/stdc++.h>
using namespace std;
vector<int>G[205];
int e,n,u,v;
int bfs(int src)
{
    int vis[205]={0},level[205]={0};
    queue<int>q;
    q.push(src);
    vis[src]=1;
    level[src]=1;
    int x=0;
    while(!q.empty())
    {
        int u=q.front();
        int f=0;

        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(vis[v]!=1 )
            {
                vis[v]=1;
                if(x%2==0)
                    level[v]=2;
                else
                    level[v]=1;

                q.push(v);
                f=1;
            }

        }
         x++;
        if(f==0 )
        {
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(level[v]==level[u])
            {
                return 1;
                break;
            }

        }


        }
        q.pop();

    }
    return 0;

}
int main()
{
   // freopen("int.txt","r",stdin);
    //freopen("out.txt","w",stdout);


       while(1)
       {
        int src;
        cin>>n;
        if(n==0)
            break;
            cin>>e;
        for(int i=0;i<205;i++)
        {
            G[i].clear();
        }
        for(int i=0;i<e;i++)
        {
           cin>>u>>v;
           if(i==0)
            src=u;
           G[u].push_back(v);
           G[v].push_back(u);
        }
        if(e==0)
            src=0;

        int r=bfs(src);
        if(r==1)
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;

       }
}
