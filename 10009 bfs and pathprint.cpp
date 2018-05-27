#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
using namespace std;

int res,ct,cases,n,m;
///dir array for Queen int dxq[10] = {-1,-1,-1,1,1,1,0,0};
///dir array for Queen int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};
map<string,int>M;
map<int,string>U;
queue<int>Q;
vector<int>G[40005];
int  path[40005];
int visited[N];
void bfs(int node){
    visited[node] = 1;
    Q.push(node);
    while(!Q.empty()){
        int u  = Q.front();
        Q.pop();
        int i,j,k;
        for(i=0;i<G[u].size();i++){
            int v = G[u][i];
            if(visited[v] == 0){
                visited[v] = 1;
                path[v] = u;
                Q.push(v);
            }
        }
    }
}
void print(string a,string b){
    if(a == b){
        cout<<a[0];
        return;
    }
    print(U[path[M[a]]],b);
    cout<<a[0];
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        scanf("%d %d",&m,&n);
        int i,j,k=0;
        string a,b;
        for(i=0;i<m;i++){
            cin>>a>>b;
            if(M[a] == 0){
                k++;
                M[a] = k;
                U[k] = a;
            }
            if(M[b] == 0){
                k++;
                M[b] = k;
                U[k] = b;
            }
            G[M[a]].push_back(M[b]);
            G[M[b]].push_back(M[a]);
        }

        for(i=0;i<n;i++){
                memset(visited,0,sizeof visited);
                memset(path,0,sizeof path);
                cin>>a>>b;
                bfs(M[a]);
                print(b,a);
                printf("\n");
        }
        for(i=0;i<=k;i++){
            G[i].clear();
        }
        M.clear();
        U.clear();
        Q = queue<int>();
        if(cases)printf("\n");
    }
}
