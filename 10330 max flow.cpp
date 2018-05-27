#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
#define INF 987654321
int ct=0,cases,pre[305],s,d,cost[205][205],color[305],n,m;
int node[205];

using namespace std;


int bfs(){
   int i,j,k,v;

   memset(color,0,sizeof color);

   queue<int>Q;

   pre[s] = -1;
   color[s] = 1;

   Q.push(s);

   while(!Q.empty()){
       int u = Q.front();
       Q.pop();
       for(i=1;i<=(n + n + 1);i++){
         if(color[i] == 0 && cost[u][i] > 0){
            color[i] = 1;
            pre[i] = u;
            Q.push(i);
         }
       }
   }

   if(color[d] == 1)return 1;
   else return 0;

}

int maxflow(){
    int i,j,k,u,v,add;
    int res = 0;

    while(bfs()){
       u = pre[d];
       v = d;
        add=INF;
       while(v != s){
           add = min(add,cost[u][v]);
           v = u;
           u = pre[v];
       }

       u = pre[d];
       v = d;
       while(v != s){
          cost[u][v] = cost[u][v] - add;
          cost[v][u] = cost[v][u] + add;

          v = u;
          u = pre[v];
       }

        res = res + add;
        //cout<<res<<endl;
    }

    return res;

}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);


    while(scanf("%d",&n)!=EOF){

        //ct++;
        //if(yy > 0)printf("\n");
        //yy = 1;
        memset(cost,0,sizeof cost);
        //memset(pre,0,sizeof pre);

        int i,j,k,a,b,c;

        s = 0;
        d = n + n + 1;



        for(i=1;i<=n;i++){
            scanf("%d",&node[i]);
        }

        scanf("%d",&m);

        for(i=1;i<=m;i++){
           scanf("%d %d %d",&a,&b,&c);
           cost[a+n][a] = node[a];
           cost[a][b+n] = cost[a][b+n] + c;
           cost[b+n][b] = node[b];
        }

        scanf("%d %d",&a,&b);
        //cout<<"asdasd"<<endl;
        for(i=1;i<=a;i++){
           scanf("%d",&k);
           cost[s][k+n] = node[k];
        }

        for(i=1;i<=b;i++){
           scanf("%d",&k);
           cost[k][d] = INF;
        }

        int res = maxflow();
        printf("%d\n",res);

     }
      return 0;
}
