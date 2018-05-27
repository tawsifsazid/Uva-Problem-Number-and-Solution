#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases,n,nisi=0,m,node,nibo,P[1005],X[1005],Y[1005],fl;
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

struct edge{
    int u,v,node_number,x,y,yes=0;
    int cost;
}A[563505];
int fnd(int r){
    if(P[r] == r)return r;
    else{
        r = fnd(P[r]);
        return r;
    }
}
bool compare(edge a,edge b){
    if(a.cost < b.cost)return true;
    return false;
}

void mst(int bb){
    int  tot =0,i=0;
    //printf("dhukse\n");
    while(tot != nisi && i!=bb){
        int uu = fnd(A[i].u);
        int vv = fnd(A[i].v);
        //printf("%d %d %d %d \n",u,v,A[i].u,A[i].v);
            if(uu != vv){
                P[uu] = P[vv];
                tot++;
                printf("%d %d\n",A[i].u,A[i].v);
                fl = 1;
                //printf("tot = %d\n",tot);
            }
        i++;
        //printf("i = %d\n",i);
    }
    return ;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
         memset(A,0,sizeof A);
        memset(X,0,sizeof X);
        memset(Y,0,sizeof Y);
        fl = 0;
        scanf("%d",&node);
        int i,j,k,x1,y1;
        for(i=1;i<=node;i++){
            scanf("%d %d",&x1,&y1);
            X[i] = x1;
            Y[i] = y1;
        }
        j = 0;
        int id = 0;
        for(i=1;i<=node;i++){
            for(j=i+1;j<=node;j++){
                A[id].cost = (((X[i] - X[j])*((X[i] - X[j]))) +(((Y[i] - Y[j]))*((Y[i] - Y[j]))));
                A[id].u = i;
                A[id].v = j;
                id++;
            }
        }
       //printf("id = %d\n",id);
        sort(A,A+id,compare);
        int b,c;
        scanf("%d",&nibo);
        for(i=0;i<=750;i++){
            P[i] = i;
        }
        int t = 0;
        for(i=1;i<=nibo;i++){
            scanf("%d %d",&b,&c);
            int uu =fnd(b);
            int vv =fnd(c);
            if(uu!=vv){
                P[uu] = vv;
                t++;
            }
        }
        nisi =  (node-1) - t;
        //printf("nisi = %d\n",nisi);
        mst(id);
        //printf("shehse\n");
        if(fl == 0)printf("No new highways need\n");
        if(cases)printf("\n");

    }
}
