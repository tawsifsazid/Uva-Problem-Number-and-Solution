#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases,n,m,A[1001][1001],dist[1001][1001],visited[1001][1001];
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
int dx[5] = {-1,0,0,1};
int dy[5] = {0,1,-1,0};
struct state{
    int x,y,value;
    bool operator < (const state &a)const{
        return value > a.value;
    }
};
//priority_queue<>P;
priority_queue<state>Q;
bool isvalid(state a){
    if(a.x>=1 && a.x<=n && a.y>=1 && a.y<=m){
        return true;
    }
    else{
        return false;
    }
}
void dijkstra(int x,int y){
//    P.push(pare(x,y));
    state node;
    node.x = x;
    node.y = y;
    dist[x][y] = A[x][y];
    Q.push(node);
    while(!Q.empty()){
        state u = Q.top();
        Q.pop();
        if(visited[u.x][u.y] == 1) continue;

        visited[u.x][u.y] = 1;

        for(int i=0;i<4;i++){
            state v;
            v.x = dx[i] + u.x;
            v.y = dy[i] + u.y;

            if(isvalid(v) && (dist[v.x][v.y] > dist[u.x][u.y] +  A[v.x][v.y])){
                //printf("valid %d %d and changed from %d to %d\n",v.x,v.y,dist[v.x][v.y],dist[u.x][u.y] +  A[v.x][v.y]);
                dist[v.x][v.y] =  dist[u.x][u.y]  + A[v.x][v.y];
                v.value =dist[u.x][u.y] +  A[v.x][v.y];

                Q.push(v);
            }
        }
    }
}
//greater
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        scanf("%d %d",&n,&m);
        int i,j,k;
         for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                dist[i][j] = 800000000;
            }
        }
        memset(visited,-1,sizeof visited);
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                scanf("%d",&A[i][j]);
            }
        }
        dijkstra(1,1);
        printf("%d\n",dist[n][m]);
        Q = priority_queue<state>();
        memset(A,0,sizeof A);
    }
}
