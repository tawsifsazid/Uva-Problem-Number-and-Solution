#include<bits/stdc++.h>

using namespace std;

int i,j,k,res,ct,cases,n;
queue<int>Q;
vector<int>graph[10000];
int visited[10000];
char A[50],a,b;
void bfs(int node){
    int i;
    Q.push(node);
    visited[node]=1;
    while(!Q.empty()){
        int now = Q.front();
       // printf("%d\n",now);
        Q.pop();
        for(i=0;i<graph[now].size();i++){
            if(visited[graph[now][i]]==0){
                //printf("connected %d with %d\n",now,graph[now][i]);
                visited[graph[now][i]]=1;
                 Q.push(graph[now][i]);
            }
        }
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    getchar();
    getchar();
    while(cases--){
        memset(visited,0,sizeof visited);
        for(i=0;i<=n;i++)graph[i].clear();
        cin>>a;
        getchar();
        n = a - 'A';
        res=0;
        //printf("%d",n);
        while(gets(A) && A[0]!=NULL){
            graph[A[0]-'A'].push_back(A[1]-'A');
            graph[A[1]-'A'].push_back(A[0]-'A');
        }
        for(i=0;i<=n;i++){
            //printf("%d\n",i);
            if(visited[i]==0){
                   // printf("dhukse %d\n",i);
                res++;
                bfs(i);
            }
        }
        printf("%d\n",res);
        if(cases)printf("\n");
    }
}
