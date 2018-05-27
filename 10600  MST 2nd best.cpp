#include<bits/stdc++.h>

using namespace std;

long long B[600000],res,n,m,a,b,cst,edgenisi[600000],fl;

struct edge{
  long long u,v,cost;
}A[600000];
bool compare (edge a, edge b){
    return a.cost<b.cost;
}
long long fnd(long long r){
    if(B[r]==r)return r;
    else{
        r =  fnd(B[r]);
        return r;
    }
}
long long mst(long long node){
    long long tot=0,in=0,i,j;
    for(i=0;i<=m;i++)B[i]=i;
    while(tot!=node-1){
        long long u = fnd(A[in].u);
        long long v = fnd(A[in].v);
        if(u!=v){
            B[u] = v;
            res = res + A[in].cost;
            edgenisi[tot]=in;
            //printf("1st MST = %lld tot = %lld \n",edgenisi[tot],tot);
            tot++;
            //printf("tot = %lld\n",tot);
        }
        in++;
        //printf("in = %lld\n",in);
    }
    return res;
}
void init(){
    int i,j;
    for(i=0;i<=m;i++){
        B[i] = i;
    }
    //memset(vis,0,sizeof vis);
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long cases,i,j;
    scanf("%lld",&cases);
    while(cases--){
        memset(edgenisi,0,sizeof edgenisi);
        scanf("%lld %lld",&n,&m);
        res = 0;
        for(i=0;i<m;i++){
            scanf("%lld %lld %lld",&a,&b,&cst);
            A[i].u = a;
            A[i].v = b;
            A[i].cost = cst;
        }
        sort(A,A+m,compare);
           //for(i=0;i<m;i++)printf("YES %lld %lld %lld\n",A[i].u,A[i].v,A[i].cost);
        long long res1 = mst(n);
        //printf("res1 = %lld\n",res1);
        res = 9999999999;
        long long res2=0,ho=0;
        for(i=0;i<n-1;i++){
             init();
             //printf("newa jabe na %lld k\n",edgenisi[i]);
                ho=0;
                res2=0;
            for(j=0;j<m && ho<n-1;j++){
                if(edgenisi[i]!=j){
                    long long u = fnd(A[j].u);
                    long long v = fnd(A[j].v);
                    if(u!=v){
                        B[u]=v;
                        ho++;
                        res2 = res2 + A[j].cost;
                        //printf("res2 = %lld,%lld\n",res2,A[j].cost);
                    }
                    //if(ho==n-1)break;
                }
            }
            //printf("2nd best mst = %lld\n",res2);
             if(ho==n-1 && res2<res){
                res = res2;
             }

        }
        printf("%lld %lld\n",res1,res);
    }
}
