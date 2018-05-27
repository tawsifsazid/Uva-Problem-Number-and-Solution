#include<bits/stdc++.h>
#define N 2000005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
#define eps 1e-9
using namespace std;

int ct=0,cases,m,B[600005],n,fl;

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
  int cost;
}A[600005];

bool compare (edge a, edge b){
    return a.cost>b.cost;
}
int fnd(int r){
    if(B[r]==r)return r;
    else{
        r =  fnd(B[r]);
        return r;
    }
}

int mst(){
    int tot=0,in=0,i,j,res = 999999999;
    for(i=0;i<=n;i++)B[i]=i;
    while(tot != n -1 ){
        int u = fnd(A[in].u);
        int v = fnd(A[in].v);
        if(u!=v){
            B[u] = v;
           res = min(res,A[in].cost);


            tot++;
            //printf("tot = %lld\n",tot);
        }

        in++;
        //if(in == a)break;
        //printf("in = %lld\n",in);
    }
    return res;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
            ct++;
       scanf("%d %d",&n,&m);
        fl = 0;
        memset(A,0,sizeof A);
        memset(B,0,sizeof B);
        int  i,j,k,a,b,c;
        k  = 0;
        for(i=0;i<m;i++){
            scanf("%d %d %d",&a,&b,&c);
            A[i].u = a;
            A[i].v = b;
            A[i].cost = c;
        }
        sort(A,A+m,compare);
            int ans = mst();
        printf("Case #%d: %d\n",ct,ans);



    }

}
