#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int u,v,res,large,i,cases,x,y,A[6000000],B[6000000],n,m;
int fin(int c){
    if(A[c]==c)return c;
    else{
        A[c]=fin(A[c]);
        //printf("ekhon A[%d]==%d\n",c,A[c]);
        return A[c];
    }
}
void unon(int a,int b){

    u=fin(a);
    v=fin(b);
    if(u==v){
        return;
    }
    else{
        A[u]=v;
    }
    return;
    //A[fin(b)]=fin(a);
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
         for(i=1;i<=6000000;i++)B[i]=0;
        large=0;
        res=0;
        scanf("%d %d",&n,&m);
        for(i=1;i<=n;i++)A[i]=i;
        while(m--){
            scanf("%d %d",&x,&y);
            unon(x,y);
        }
        for(i=1;i<=n;i++){
            A[i]=fin(A[i]);
            //printf("A[%d]==%d\n",i,A[i]);
        }
        for(i=1;i<=n;i++){
             B[A[i]]++;
        }
        for(i=1;i<=n;i++){
             if(B[i]>res){
                res=B[i];
             }
        }
        printf("%d\n",res);
    }
}
