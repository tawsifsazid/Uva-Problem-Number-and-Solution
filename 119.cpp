
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int k,numb,i,cases,n,b,j,m,res,g=0,amount,give,A[100];
char B[100][100],C[100];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&numb)!=EOF){
        if(g>0)printf("\n");
        g++;
        for(i=1;i<=numb;i++){
            A[i]=0;
            scanf("%s",B[i]);
        }
        for(i=1;i<=numb;i++){
            scanf("%s",C);
            scanf("%d %d",&amount,&give);
          if(give!=0){
            for(j=1;j<=numb;j++){
                if(!strcmp(C,B[j])){
                    A[j]=A[j]-amount+(amount%give);
                    //printf("%s ===%d\n",B[j],A[j]);
                }
            }
            for(j=1;j<=give;j++){
                scanf("%s",C);
                for(k=1;k<=numb;k++){
                    if(!strcmp(C,B[k])){
                        A[k]=A[k]+(amount/give);
                        //printf("%s ===%d\n",B[k],A[k]);
                    }
                }
            }
          }
        }
        //printf("bair hoise\n");
        for(i=1;i<=numb;i++){
            printf("%s %d\n",B[i],A[i]);
        }
    }
}
