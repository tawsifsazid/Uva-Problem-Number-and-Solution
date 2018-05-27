#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases,n,s,X[505],Y[505],P[505];
double res=-1.0;
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
    int u,v;
    double cost;
}A[125255];
int fnd(int r){
    if(P[r] == r)return r;
    else{
        r = fnd(P[r]);
        return r;
    }
}
bool compare(edge a,edge b){
   //printf("%lf %lf\n",a.cost,b.cost);
    return a.cost - b.cost < 1e-9;
}
void mst(){
    int tot=0,in=0,component=n;
    for(int i=1;i<=n;i++){
        P[i] = i;
    }
    while(tot != n-1 && component!=s){
        int u = fnd(A[in].u);
        int v = fnd(A[in].v);
        if(u != v){
            P[v] = u;
            component--;
            res = max(res,A[in].cost);
            tot++;
        }
        in++;
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        scanf("%d %d",&s,&n);
        int i,j,k,x1,y1;
        for(i=1;i<=n;i++){
                scanf("%d %d",&X[i],&Y[i]);
        }
        int id = 0;
        for(i=1;i<=n;i++){
            for(j=i+1;j<=n;j++){
                A[id].u = i;
                A[id].v = j;
                A[id].cost = sqrt(((X[i]-X[j])*(X[i]-X[j]))+((Y[i]-Y[j])*(Y[i]-Y[j])));
                //printf("id = %d and cost %lf\n",id,A[id].cost);
                id++;
            }
        }
        sort(A,A+id,compare);
        //printf("%lf\n",1e-9);
        //printf("after sort\n");
        //for(i=0;i<id;i++){
        //   printf("id = %d and cost %lf\n",i,A[i].cost);
        //}

        res = -1;
        mst();
        printf("%.2lf\n",res);
    }
}
