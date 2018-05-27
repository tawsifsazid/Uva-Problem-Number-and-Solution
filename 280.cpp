#include<bits/stdc++.h>

using namespace std;

int k,res,ct,cases,n,v,a,visited[200],check;
vector<int>graph[200];
//queue<int>Q;
void dfs(int node){
    int i,j;
    //Q.push(node);
    j=graph[node].size();
    for(i=0;i<j;i++){
        if(visited[graph[node][i]]==0){
            visited[graph[node][i]]=1;
            dfs(graph[node][i]);
        }
    }

}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j;
    while(scanf("%d",&n)!=EOF){
            for(i=1;i<=n;i++)graph[i].clear();
        if(n==0)break;
        while(scanf("%d",&v)){
            if(v==0)break;
            while(scanf("%d",&a)){
                if(a==0)break;
                graph[v].push_back(a);
                //printf("v = %d is connected with a = %d\n",v,a);
            }
        }
        scanf("%d",&check);
        int b;
        for(i=1;i<=check;i++){
            //Q = queue<int>();
            memset(visited,0,sizeof visited);
            scanf("%d",&b);
            //printf("b==%d\n",b);
            dfs(b);
            res=0;
            for(j=1;j<=n;j++){
                if(visited[j]==0){
                   res++;
                }
            }
            printf("%d",res);
            for(j=1;j<=n;j++){
                if(visited[j]==0){
                    printf(" %d",j);
                }
            }
            printf("\n");
        }

    }
}
