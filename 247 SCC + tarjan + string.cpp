#include<bits/stdc++.h>
# define white 0
#define black 2
#define grey 1
using namespace std;

int res,ct=0,cases,n,M,edge,counter,flag=0;
vector<int>graph[20000];
vector<int>tarjan;
map<string , int >m;
map<int ,string>q;
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
    int fl =0;
    if(low[s] == disc[s]){
        while(1){
            int last = tarjan.back();
            if(fl > 0)cout<<","<<" ";
            cout<<q[last];
            tarjan.pop_back();
            visited[last] = black;
            if(last == s)break;
            fl++;
        }
        cout<<endl;
    }
}
int main(){
    int i,j;
    string a,b;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&n,&M)!=EOF){
            ct++;
            int k = 0;
        if(n==0 && M==0)break;
         if(flag > 0)printf("\n");
        counter = 0;
        res = 0;
        for(i=0;i<=M;i++)graph[i].clear();
        tarjan.clear();
        m.clear();
        q.clear();
        for(i=1;i<=M;i++){
            cin>>a>>b;
            if(m[a] == 0){
                k++;
                m[a] = k;
                q[k] = a;
            }
            if(m[b] == 0){
                k++;
                m[b] = k;
                q[k] = b;
            }
            graph[m[a]].push_back(m[b]);
        }
            memset(visited,0,sizeof visited);
            printf("Calling circles for data set %d:\n",ct);
            for(i=1;i<=n;i++){
                if(visited[i] == white){
                    dfs(i);
                }
            }
            flag++;
    }
}

