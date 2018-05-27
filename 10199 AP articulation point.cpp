#include<bits/stdc++.h>
//#define N 1005
#define  ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases,n,m,res,counter=0,fl = 0;

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
vector<int>graph[2000];
map<string,int>M;
map<int,string>N;
vector<string>q;
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
    while(cin>>n){
        string a,b;
        if(n==0)break;
        if(fl > 0)printf("\n");
        fl++;
        ct++;
        int i,j,k=1;
        for(i=1;i<=n;i++){
            cin>>a;
            M[a]=k;
            //q.push_back(a);
            N[k]=a;
            //cout<<"hehhe"<< M[a]<<endl;
            k++;
        }
        //sort(q.begin(),q.end());
        //break;
        cin>>m;
        for(i=1;i<=m;i++){
            cin>>a>>b;
            graph[M[a]].push_back(M[b]);
            graph[M[b]].push_back(M[a]);
        }
        memset(visited,0,sizeof visited);
        memset(parent , -1 , sizeof parent);
        memset(ans , 0,sizeof ans);
        for(i=1;i<=n;i++){
            if(visited[i] == 0){
                dfs(i);
            }
        }
        res = 0;
        for(i=1;i<=n;i++){
            if(ans[i]==1){
                res++;
            }
        }
        cout<<"City map #"<<ct<<": "<<res<<" "<<"camera(s) found"<<endl;
        for(i=1;i<=n;i++){
            if(ans[i]==1){
                string c = N[i];
                q.push_back(c);
                //cout<<N[i]<<endl;
            }
        }
        sort(q.begin(),q.end());
        for(i=0;i<q.size();i++){
            cout<<q[i]<<endl;
        }
        //memset(visited,0)
        q.clear();
        for(i=1;i<=n;i++){
            graph[i].clear();
        }
    }
}
