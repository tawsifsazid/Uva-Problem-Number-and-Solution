#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<set>

using namespace std;

long long i,j,k,ct,cases,n,m,B[3000000],L,l=0;
struct edge{
    long long u,v,cost;
}A[3000000];
bool compare(edge a,edge b){
        if(a.cost==b.cost){
            return 1;
        }
        else{
            return a.cost<b.cost;
        }

}
void init(){
    for(i=0;i<=1000000;i++){
        B[i]=i;
    }
}
long long fnd(long long r){
    if(B[r]==r)return r;
    else{
        r=fnd(B[r]);
        return r;
    }
}
long long mst(long long x){
    long long top=0,in=0,res=0;
    while(in!=x){
        top++;
        j=fnd(A[top].u);
        k=fnd(A[top].v);
        if(j!=k){
            res=res+A[top].cost;
            B[k]=j;
            in++;
        }
    }
    return res;

}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF){
            init();
            if(l>0)printf("\n");
            l++;
            long long res=0;
            for(i=1;i<=n-1;i++){
                scanf("%lld %lld %lld",&A[i].u,&A[i].v,&A[i].cost);
            }
            //sort(A+1,A+n,compare);
            //for(i=1;i<=n-1;i++){
             //   printf("%lld %lld %lld\n",A[i].u,A[i].v,A[i].cost);
           // }
            scanf("%lld",&L);
            for(i=1;i<=L;i++){

            }
            //printf("%lld\n",j);
            sort(A+1,A+n,compare);
            res=mst(n-1);
            printf("%lld\n",res);
            init();
            for(i=1;i<=L;i++){
                scanf("%lld %lld %lld",&A[i].u,&A[i].v,&A[i].cost);
            }
            j=i;
            scanf("%lld",&m);
            m=m+L;
            for(j=i;j<=m;j++){
                scanf("%lld %lld %lld",&A[j].u,&A[j].v,&A[j].cost);
            }
            sort(A+1,A+m,compare);
            //for(i=1;i<=m;i++){
            //    printf("haha\n%lld %lld %lld\n",A[i].u,A[i].v,A[i].cost);
            //}
            res=mst(n-1);
            printf("%lld\n",res);
    }
}
