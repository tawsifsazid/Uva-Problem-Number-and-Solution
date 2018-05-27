#include<bits/stdc++.h>

using namespace std;

long long k,res,ct,cases,n,m,u,v,cst,total;
long long B[300000];
struct edge{
    int u,v,cost;
}A[300000];
bool compare(edge a,edge b){
    return (a.cost<b.cost);
}
long long fnd(int r){
    if(B[r]==r){
        return r;
    }
    else{
        r=fnd(B[r]);
        return r;
    }
}
long long mst(long long x){
    long long in=0,tot=0;
   long long res=0;
    for(long long i=0;i<=m;i++)B[i]=i;
    while(tot!=x-1){
        long long u=fnd(A[in].u);
        long long v=fnd(A[in].v);
        if(u!=v){
            B[v]=u;
            res=res+A[in].cost;
            tot++;
        }
         in++;
    }
    return res;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long i,j;
    while(scanf("%lld %lld",&m,&n)!=EOF){
        if(n==0 && m==0)break;
        res = 0;
        total = 0;
        for(i=0;i<n;i++){
          scanf("%d %d %d",&u,&v,&cst);
          A[i].u = u;
          A[i].v = v;
          A[i].cost = cst;
          total = total + cst ;
        }
        sort(A,A + n,compare);
        //for(i=0;i<n;i++){
        //    printf("%d %d %d\n",A[i].u,A[i].v,A[i].cost);
        //}
        res = mst(m);
        printf("%lld\n",total-res);
    }
}
