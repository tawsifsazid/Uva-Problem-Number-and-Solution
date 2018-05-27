#include<bits/stdc++.h>
# define white 0
#define black 2
#define grey 1
using namespace std;

int res,ct,cases,n,m,edge,counter;
vector<int>graph[2099000];
vector<int>tarjan;
int visited[5000],low[5000],disc[5000];
void dfs(int s){
    visited[s] = grey;
    tarjan.push_back(s);
    low[s] = disc[s] = ++counter;
    int i,j;
    for(i=0;i<graph[s].size();i++){
        int t = graph[s][i];
        if(visited[t] == white){
            dfs(t);
            low[s] = min(low[s],low[t]);
        }
        else if(visited[t] == grey){
            low[s] = min(low[s],low[t]);
        }
    }
    if(low[s] == disc[s]){
        while(1){
            int last = tarjan.back();
            tarjan.pop_back();
            visited[last] = black;
            if(last == s)break;
        }
        res++;
    }
}
int main(){
    int i,j,a,b;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&n,&m)!=EOF){
        if(n==0 && m==0)break;
        counter = 0;
        res = 0;
        for(i=0;i<=m;i++)graph[i].clear();
        memset(low, 0 ,sizeof low);
        memset(disc, 0 ,sizeof disc);
        tarjan.clear();
        for(i=1;i<=m;i++){
            scanf("%d %d %d",&a,&b,&edge);
            if(edge == 1){
                graph[a].push_back(b);
            }
            else{
                graph[a].push_back(b);
                graph[b].push_back(a);
            }
        }
            memset(visited,0,sizeof visited);
            for(i=1;i<=n;i++){
                if(visited[i] == white){
                    dfs(i);
                }
            }
            if(res==1)printf("%d\n",res);
            else{
                printf("0\n",res);
            }
    }
}
