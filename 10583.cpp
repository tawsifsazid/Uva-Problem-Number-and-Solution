#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
int n,m,A[60000],i,j,k,res,ans,ct=0,x,y,v,B[60000];
int fin(int c ){
    if(A[c]==c){
        return c;
    }
    else{
        return A[c]=fin(A[c]);
    }
}
void unon(int a,int b){
    A[fin(b)]=fin(a);
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&n,&m)!=EOF){
        v=0;
        res=0;
        ct++;
        if(n==0 && m==0)break;
        for(i=1;i<=n;i++){
            A[i]=i;
        }
        for(i=1;i<=m;i++){
            scanf("%d %d",&x,&y);
            B[x]=y;
            unon(x,y);
        }
        //for(i=1;i<=n;i++)printf("A[%d]=%d\n",i,A[i]);
        for(i=1;i<=n;i++){
            if(A[i]==i){
              res++;
            }
        }
        printf("Case %d: %d\n",ct,res);
    }
}
