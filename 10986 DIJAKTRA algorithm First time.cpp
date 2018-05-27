#include<bits/stdc++.h>
#define pare pair<int,int>
using namespace std;

long long k,ct=0,cases,n,m,s,t,a,b,w;
struct edge{
    int connected,latency;
};
struct state{
    int nodecost,nodevalue;
     bool operator < (const state &a)const{
        //printf("ekhon state %d and a.nodecost = %d\n",nodecost,a.nodecost);
        return nodecost > a.nodecost;
    };
};
vector<edge>graph[50006];
long long dist[30000];
priority_queue<state>Q;
void DJ(int x){
    //printf("x= %d\n",x);

     state node,B,C;
     node.nodevalue = x ;
     node.nodecost = 0;
     dist[x]=0;
    long long i,j,cst,u;
    Q.push(node);
     while(!Q.empty()){
       B = Q.top();
        u = B.nodevalue;
       Q.pop();
        for(i=0;i<graph[u].size();i++){
            cst = graph[u][i].latency;
            j = graph[u][i].connected;
            if(dist[j]>dist[u]+cst){
                dist[j]=dist[u]+cst;
                //printf("j=%d tey ashte u=%d theke distance=%d\n",j,u,dist[j]);
                C.nodevalue = j;
                C.nodecost = dist[j];
                Q.push(C);
                //printf("pushing %d\n",B.nodevalue);
            }
        }
            //printf("%d\n",min(color1,color2));
     }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j;
    scanf("%lld",&cases);
    while(cases--){
        ct++;
        scanf("%lld %lld %lld %lld",&n,&m,&s,&t);
        for(i=0;i<=25000;i++)dist[i]=8000000000;
        //printf("%lld\n",dist[1]);
        for(i=0;i<=m;i++)graph[i].clear();
        for(i=1;i<=m;i++){
            scanf("%lld %lld %lld",&a,&b,&w);
            edge object;
           object.connected = b;
           object.latency = w;
           graph[a].push_back(object);
           object.connected = a;
           object.latency = w;
           graph[b].push_back(object);
            //printf("cost [a]=%d == %d\n",a,cost[a][0]);
            //printf("cost [b]=%d == %d\n",b,cost[b][0]);
            //printf("cost a == %d && b == %d,,, %d\n",a,b,cost[a][b]);
        }
        DJ(s);
        if(dist[t]==8000000000)printf("Case #%lld: unreachable\n",ct);
        else{
            printf("Case #%lld: %lld\n",ct,dist[t]);
        }
    }
}
