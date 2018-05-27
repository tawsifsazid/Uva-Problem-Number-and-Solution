#include<bits/stdc++.h>
#define N 1005
#define  ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases,n,res,counter=0;

///dir array for Queen int dxq[10] = {-1,-1,-1,1,1,1,0,0};
///dir array for Queen int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};
/*int leap(int a){
    if(a%4==0){
        if(a%100==0){
            if(a%400==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}*/
vector<int>graph[200];
int parent[105],visited[105],disc[200],low[200],ans[200];
void dfs(int node){
    visited[node] = 1;
    disc[node] = low[node] = ++counter;
    int children = 0,i,u,v,j;
    for(i=0;i<graph[node].size();i++){
        v = graph[node][i];
        if(visited[v] == 0){
            children++;
            parent[v] = node;
            dfs(v);
            low[node] = min(low[node],low[v]);
            if(children>1 && parent[node] ==-1){
                ans[node] = 1;
            }
            else if(parent[node]!=-1 && low[v] >= disc[node]){
                ans[node] = 1;
            }
        }
        else if(v != parent[node]){
            low[node] = min(low[node],disc[v]);
        }
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
        getchar();
        if(n==0)break;
        string str;
        istringstream Z(str);
        int num,a;
        while(getline(cin,str)){
             istringstream Z(str);
            Z>>num;
            if(num == 0)break;
           while(Z>>a){
              graph[num].push_back(a);
              graph[a].push_back(num);
           }
        }
        int i,j,k;
        memset(visited,0,sizeof visited);
        memset(ans,0,sizeof ans);
        //memset(disc,0,sizeof disc);
        //memset(low,,sizeof low);
        //for(i=1;i<=n;i++)low[i] = 999999;
        memset(parent,-1,sizeof parent);
        res = 0;
        for(i=1;i<=n;i++){
            if(visited[i]==0){
                dfs(i);
            }
        }
        //printf("ss\n");
        for(i=1;i<=n;i++){
            if(ans[i]==1){
                res++;
            }
        }
        printf("%d\n",res);
        for(i=1;i<=n;i++){
            graph[i].clear();
        }
    }
}
