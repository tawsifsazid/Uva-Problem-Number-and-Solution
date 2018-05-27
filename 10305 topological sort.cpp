#include<bits/stdc++.h>
#define white 0
#define grey 1
#define black 2
using namespace std;
bool cycle;
int n,m,a,b;
vector<int>graph[201];
stack<int>topo;
int vis[201];
void dfs(int s){
    vis[s] = grey;
    int i;
    for(i=0;i<graph[s].size();i++){
        int t = graph[s][i];
        if(vis[t]==white){
            dfs(t);
        }
        else if(vis[t] == grey){
            cycle = false;
        }
    }
    vis[s] = black;
    //printf("%d\n",s);
    topo.push(s);
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j;
    while(scanf("%d %d",&n,&m)!=EOF){
        if(n==0 && m==0)break;
        memset(vis,white,sizeof vis);
        for(i=0;i<=m;i++)graph[i].clear();
        for(i=0;i<m;i++){
            scanf("%d %d",&a,&b);
            graph[a].push_back(b);
        }
        for(i=1;i<=n;i++){
            if(vis[i]==white){
                dfs(i);
            }
        }
        for(i=1;i<=n;i++){
            if(vis[i]==white){
                topo.push(i);
            }
        }
        i = 0;
        while(!topo.empty()){
            if(i==0){
                printf("%d",topo.top());
                i=1;
                topo.pop();
            }
            else{
                printf(" %d",topo.top());
                topo.pop();
            }
        }
        printf("\n");
    }
}
