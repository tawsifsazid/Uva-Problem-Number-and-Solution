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

int i,j,k,res,n1,n2,ct,l,cases,n,colour[20000],v,f,pre;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    queue<int>Q;
    vector<int>graph[10000];
    while(scanf("%d",&n)!=EOF){
        //std :: fill(graph.begin(),graph.end(),0);
        if(n==0)break;
        f=0;
        scanf("%d",&l);
        for(i=0;i<=10000;i++)colour[i]=0;
        v=0;
       // printf("aschhe %d %d\n",n,l);
        for(i=1;i<=l;i++){
            scanf("%d %d",&n1,&n2);
            graph[n1].push_back(n2);
            //graph[n2].push_back(n1);
        }
        Q.push(0);
        colour[0]=1;
        //prev=v;
        //printf("aschhw 2\n");
        while(!Q.empty()){
                v=Q.front();
                //pre=v;
                Q.pop();
                //printf("v==%d\n",v);
            for(i=0;i<graph[v].size();i++){
                    //printf("ekhon %d er shathhe jukto %d\n",v,graph[v][i]);
                if(colour[graph[v][i]]==0){
                    if(colour[v]==1){
                        colour[graph[v][i]]=2;
                        // printf("ekhon %d er shathhe jukto %d rr %d er colour %d\n",v,graph[v][i],graph[v][i],colour[graph[v][i]]);
                    }
                    else{
                        colour[graph[v][i]]=1;
                       // printf("ekhon %d er shathhe jukto %d rr %d er colour %d\n",v,graph[v][i],graph[v][i],colour[graph[v][i]]);
                    }
                    Q.push(graph[v][i]);
                    //pre=graph[v][i];
                //printf("Q tey ase %d and prev==%d\n",graph[v][i],prev);
                }
                else{
                    //prev=graph[v][i];
                    if(colour[graph[v][i]]==colour[v]){
                        f=1;
                        break;
                    }
                }
            }
            if(f==1)break;
        }
        if(f==1)printf("NOT BICOLORABLE.\n");
        else{
            printf("BICOLORABLE.\n");
        }
        for(i=0;i<n;i++){
            graph[i].clear();
        }
        Q=queue<int>();
    }
    return 0;
}
