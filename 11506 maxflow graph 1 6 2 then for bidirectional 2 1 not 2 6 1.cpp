#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
#define INF 987654321
int ct=0,cases,pre[305],s,d,cost[1005][1005],color[305],m,w,n;
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
       for(i=1;i<=(n);i++){
            //cout<<u<<" "<<i<<endl;
         if(color[i] == 0 && cost[u][i] > 0){
           // cout<<"dhukse"<<endl;
            color[i] = 1;
            pre[i] = u;
            Q.push(i);
         }
       }
   }

   if(color[d] == 1)return 1;
   else{

    return 0;

   }

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
          // cout<<u<<" "<<v<<endl;
          // cout<<add<<" holo "<<endl;
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


    while(scanf("%d %d",&m,&w)!=EOF){
            if(m == 0 && w == 0)break;

            int a,b,c,i,j,k;
            memset(cost,0,sizeof cost);

            for(i=1;i<=m-2;i++){
                scanf("%d %d",&a,&c);
                node[a] = c;
            }
            //cost[d][d+n] = INF;
            s = 1;
            d = m;
            n = m + m;
            for(i=1;i<=w;i++){
                scanf("%d %d %d",&a,&b,&c);
                //cout<<"aa"<<endl;
                if(a==1 && b==d){
                    cost[a][b] = c;
                    cost[b][a] = c;
                    //cout<<a<<" "<<b<<" "<<cost[a][b]<<endl;
                }
                else if(a==1 && b!=d){
                    cost[a][b+m] = c;
                    cost[b+m][b]= node[b];

                    // cout<<a<<" "<<b<<" "<<cost[a][b]<<endl;
                    //cout<<b<<" "<<b+m<<" "<<cost[b][m+b]<<endl;
                    cost[b][a] = c;
                }
                else if(a!=1 && b==d){
                    cost[a+m][a] = node[a];
                    cost[a][d] = c;
                    //  cout<<a<<" "<<a+m<<" "<<cost[a][a+m]<<endl;
                    //cout<<a+m<<" "<<b<<" "<<cost[a+m][b]<<endl;

                    cost[d][a+m] = c;

                }
                else{
                    cost[a+m][a] = node[a];
                    cost[a][b+m] = c;
                    cost[b+m][b] = node[b];

                    //  cout<<a<<" "<<a+m<<" "<<cost[a][a+m]<<endl;
                    //cout<<a+m<<" "<<b<<" "<<cost[a+m][b]<<endl;
                      //cout<<b<<" "<<b+m<<" "<<cost[b][b+m]<<endl;

                    cost[b][a+m] = c;
                }

            }

                //for(i=1;i<=m+m;i++){
                  //  for(j=1;j<=m+m;j++){
                  ////     if(cost[i][j])cout<<i<<" "<<j<<" "<<cost[i][j]<<endl;
                  //  }
                //}
                //cout<<"hahahahaa "<<cost[3][6]<<endl;
            int res = maxflow();
            cout<<res<<endl;
     }
      return 0;

}
