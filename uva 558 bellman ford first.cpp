#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases,n,m;
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
    int u,v,cost;
}A[20005];
int dist[1005];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
         int i,j,k,x,y,cst;
         for(i=0;i<=1000;i++){
            dist[i] = 800000000;
         }
         memset(A,0,sizeof A);
        scanf("%d %d",&n,&m);
        for(i=0;i<m;i++){
            scanf("%d %d %d",&x,&y,&cst);
            A[i].u = x;
            A[i].v = y;
            A[i].cost = cst;
        }
        dist[0] = 0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                state aa = A[j];
                if(dist[aa.v] > dist[aa.u] + aa.cost){

                    dist[aa.v] = dist[aa.u] + aa.cost;
                   // printf("dist komse %d ,, u=%d and v = %d\n",dist[aa.v],aa.u,aa.v);
                }
            }
        }
        int fl = 0;
        for(j=0;j<m;j++){
            state aa = A[j];
            if(dist[aa.v] > dist[aa.u] + aa.cost){
                fl = 1;
                break;
            }
        }
        if(fl == 1)printf("possible\n");
        else{
            printf("not possible\n");
        }
    }
}
