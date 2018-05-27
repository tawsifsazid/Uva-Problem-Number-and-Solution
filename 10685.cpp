#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int i,k,c,r,ans,res,A[60000],D[60000],j,x,y;
char B[6000][60],C[100],P[100];
int fin(int c){
    if(A[c]==c){
        return c;
    }
    else{
       // printf("c== %d\n",c);
        A[c]=fin(A[c]);
    //printf("A[%d]==%d\n",c,A[c]);
        return A[c];
    }
}
void unon(int a,int b){
    A[fin(b)]=fin(a);
    return;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&c,&r)!=EOF){
        res=0;
        if(c==0 && r==0)break;
        for(i=1;i<=55000;i++)D[i]=0;
        for(i=1;i<=c;i++){
            scanf("%s",B[i]);
        }
        for(i=1;i<=c;i++)A[i]=i;
        for(i=1;i<=r;i++){
            scanf("%s %s",C,P);
            for(j=1;j<=c;j++){
                if(!strcmp(C,B[j])){
                    y=j;
                }
                if(!strcmp(P,B[j])){
                    x=j;
                }
            }
            unon(x,y);
        }
        for(i=1;i<=c;i++){
             //printf("A[%d]== %d\n",i,A[i]);
             int z=fin(A[i]);
             A[i]=z;
                //printf("A[%d]==%d\n",i,A[i]);
        }
        for(i=1;i<=c;i++){
            D[A[i]]++;
        }
        for(i=1;i<=c;i++){
            if(D[i]>res){
                res=D[i];
            }
        }
        printf("%d\n",res);
    }
}
