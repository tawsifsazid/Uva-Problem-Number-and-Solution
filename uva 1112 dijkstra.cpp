#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases,n,exitcell,timer,m;
///dir array for Queen int dxq[10] = {-1,-1,-1,1,1,1,0,0};
///dir array for Queen int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};
/*int leap(int year){
   	if( year%4 == 0 && year%100 == !0 )
            return 1;
	else if (year%100 == 0 && year%400 == 0)
            return 1;
	else
        return 0;
}*/


struct state{
    int cost,connected,node_number;

    bool operator < (const state &a)const{
        return cost > a.cost;
    }
};
vector<state>G[1005];
int dist[105];
priority_queue<state>Q;
void dijkstra(int node){
    state start ;
    start.node_number = node;
    start.cost = 0;
    dist[start.node_number] = 0;
    //printf("%d %d %d\n",start.node_number,start.cost,dist[start.node_number]);
    Q.push(start);
    while(!Q.empty()){
        state u = Q.top();
        Q.pop();
        for(int i = 0 ;i<G[u.node_number].size();i++){
            state v;
            v =  G[u.node_number][i];
            //printf("%d er sathe connected %d\n",u.node_number,v.node_number);
            if(dist[v.node_number] >  dist[u.node_number] + v.cost){
                dist[v.node_number] = dist[u.node_number] + v.cost;
                v.cost = dist[v.node_number];
                //printf("dist became %d\n",dist[v.node_number]);
                Q.push(v);
            }
        }
    }


}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        scanf("%d %d %d %d",&n,&exitcell,&timer,&m);
        int i,j,k,a,b,cst;
        for(i=1;i<=m;i++){
            scanf("%d %d %d",&a,&b,&cst);
            state ob;
            ob.cost = cst;
            ///ob.connected = b;
            ob.node_number =  b;
            G[a].push_back(ob);
        }

        int res = 0;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                dist[j] = 800000000;
            }
            dijkstra(i);
            if(dist[exitcell] <= timer)res++;
            //break;
        }
        printf("%d\n",res);

        if(cases)printf("\n");
        Q = priority_queue<state>();
        for(j=0;j<=100;j++){
                dist[j] = 800000000;
                G[j].clear();
        }

    }
}
