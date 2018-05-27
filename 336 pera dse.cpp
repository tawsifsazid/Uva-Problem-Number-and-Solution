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

long long  u,i,res,ct=0,cases,n,n1,n2,TTL,v,path[50000],visited[50000],k;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //scanf("%d",&k);
    //printf("%d\n",k);
    while(scanf("%lld",&n)!=EOF){
        if(n==0)break;
        k=0;
        //set<long long>r;
        map<long long,long long>y;
         vector<long long>graph[1000];
        //map<int,int>path;
        //map<int,int>visited;
        set<long long> :: iterator j;
        queue<long long>Q;
        for(i=0;i<n;i++){
            scanf("%lld %lld",&n1,&n2);
             if(y[n1]==0){
                k++;
                y[n1]=k;
                //printf("n1==%lld,y[n1]==%lld\n",n1,y[n1]);
            }
            if(y[n2]==0){
                k++;
                y[n2]=k;
               // printf("n2==%lld,y[n2]==%lld\n",n2,y[n2]);
            }
            graph[y[n1]].push_back(y[n2]);
            graph[y[n2]].push_back(y[n1]);
            //r.insert(n1);
            //r.insert(n2);
            //k=0;
            //printf("%lld %lld\n",n1,n2);
        }
        while(scanf("%lld %lld",&n1,&TTL)!=EOF){
            if(n1==0 && TTL==0)break;
            ct++;
            for(i=1;i<=k;i++){
                visited[i]=0;
                path[i]=0;
                //printf("i==%lld, y==%lld\n",,y[i]);
            }
            //printf("aschhe\n");
            res=0;
            path[y[n1]]=0;
            visited[y[n1]]=1;
            Q.push(y[n1]);
          while(!Q.empty()){
            v=Q.front();
            visited[v]=1;
            Q.pop();
            int h=graph[v].size();
            //printf("h== %d\n",h);
            //printf("v tey rakhse %d\n",v);
            for(i=0;i<h;i++){
                 u=graph[v][i];
                 //printf("u== %d\n",u);
                if(visited[u]==0){
                    visited[u]=1;
                    path[u]=path[v]+1;
                    //printf("ekhon path er maan %lld==%lld\n",graph[v][i],path[u]);
                    Q.push(graph[v][i]);
                }
                //printf("i== %d\n",i);
            }
          }
           for(i=1;i<=k;i++){
                if(visited[i]==0){
                  res++;
                }
                if(visited[i]==1){
                    if(path[i]>TTL){
                        res++;
                    }
                }
                //printf("u==%lld, y==%lld\n",u,y[u]);
            }
            printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",ct,res,n1,TTL);
        }
    }

}
