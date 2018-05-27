#include<bits/stdc++.h>

using namespace std;

int res,ct=0,cases,n,s,d,r,a,b,color[400],fl;
vector<int>graph[1000];
queue<int>Q;
void bfs(int node){
    int i,j,x,y;
    //printf("ekhon sada ase %d %d tey = %c\n",row,col,A[row][col]);
    Q.push(node);
    color[node]=1;
    while(!Q.empty()){
        int now = Q.front();
        Q.pop();
        for(i=0;i<graph[now].size();i++){
            if(color[graph[now][i]]==0){
                if(color[now]==1){
                    color[graph[now][i]]=2;
                }
                else{
                    color[graph[now][i]]=1;
                }
                Q.push(graph[now][i]);
            }
            else{
                if(color[graph[now][i]]==color[now]){
                    fl=0;
                }
            }
        }
    }
}
int main(){
    //scanf("%d",&cases);
    int i,j;
    while(scanf("%d",&n)!=EOF){
        if(n==0)break;
        memset(color , 0 ,sizeof color);
        for(i=1;i<=n;i++)graph[i].clear();
        fl=1;
        while(scanf("%d %d",&a,&b)){
            if(a==0 && b==0){
                break;
            }
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        bfs(1);
        if(fl==0)printf("NO\n");
        else{
            printf("YES\n");
        }
    }
}
