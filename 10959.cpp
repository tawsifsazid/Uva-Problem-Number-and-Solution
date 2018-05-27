#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<set>

using namespace std;

int v,i,j,k,res,ct,cases,n,l,d,path[80000],visited[80000],n1,n2;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        vector<int>graph[20000];
        queue<int>Q;
        scanf("%d %d",&d,&l);
        for(i=1;i<=l;i++){
            scanf("%d %d",&n1,&n2);
            graph[n1].push_back(n2);
            graph[n2].push_back(n1);
        }
        for(i=0;i<d;i++){
            visited[i]=0;
            path[i]=0;
        }
        Q.push(0);
        visited[0]=1;
        path[0]=0;
        while(!Q.empty()){
               // printf("dhukse\n");
           v=Q.front();
           Q.pop();
           for(i=0;i<graph[v].size();i++){
               //printf("aschhee\n");
                if(visited[graph[v][i]]==0){
                    //printf("%d er sathhe jukto %d\n",v,graph[v][i]);
                    visited[graph[v][i]]=1;
                    path[graph[v][i]]=path[v]+1;
                    Q.push(graph[v][i]);
                }
           }
        }
        for(i=0;i<d;i++){
            if(visited[i]==1 && i!=0){
                printf("%d\n",path[i]);
            }
        }
        if(cases)printf("\n");
    }
}
