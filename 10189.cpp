#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
 /*for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
              printf("%c",A[i][j]);
            }
            printf("\n");
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
              printf("%c",B[i][j]);
            }
            printf("\n");
        }*/

int ct=0,i,cases,n=0,b,j,m,res,g,flag=0,flag1,a;
int A[200][200],B[200][200];
char ch;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&a,&b)!=EOF){
            getchar();
        if(a==0 && b==0)break;
        if(n>0)printf("\n");
        n++;
        ct++;
        flag=0;
        flag1=0;
        res=0;
        for(i=1;i<=a;i++){
            for(j=1;j<=b;j++){
              scanf("%c",&A[i][j]);
            }
            getchar();
            //printf("\n");
        }
       //printf("kirrrrrrrre\n");
        for(i=1;i<=a;i++){
            for(j=1;j<=b;j++){
              if(A[i][j]=='*'){
                B[i][j]='*';
              }
              else{
                B[i][j]=0;
              }
            }
            //printf("\n");
        }
            for(i=1;i<=a;i++){
                for(j=1;j<=b;j++){
                        res=0;
                        flag1=0;
                    if(B[i][j]==0){
                           //printf("%d %d\n",i,j);
                        if(j+1<=b){
                            if(A[i][j+1]=='*'){
                               // printf("D1 bomb ase %d %d\n",i,j+1);
                                res++;
                                //printf("ekohn %d\n",res);
                                flag1=1;
                            }
                        }
                        if(j-1>=1){
                            if(A[i][j-1]=='*'){
                                //printf("D2 bomb ase %d %d\n",i,j-1);
                                res++;
                                //printf("ekohn %d\n",res);
                                flag1=1;

                            }
                        }
                        if(i+1<=a){
                            if(j+1<=b){
                                if(A[i+1][j+1]=='*'){
                                    //printf("D3 bomb ase %d %d\n",i+1,j+1);
                                    res++;
                                    //printf("ekohn %d\n",res);
                                    flag1=1;
                                }
                            }
                            if(j-1>=1){
                                if(A[i+1][j-1]=='*'){
                                     //printf("D4 bomb ase %d %d\n",i+1,j-1);
                                    res++;
                                    //printf("ekohn %d\n",res);
                                    flag1=1;
                                }
                            }
                            if(A[i+1][j]=='*'){
                                 //printf("D5 bomb ase %d %d\n",i+1,j);
                                    res++;
                                    //printf("ekohn %d\n",res);
                                    flag1=1;
                            }
                        }
                        if(i-1>=1){
                            if(j+1<=b){
                                if(A[i-1][j+1]=='*'){
                                    //printf("D6 bomb ase %d %d\n",i-1,j+1);
                                    res++;
                                    //printf("ekohn %d\n",res);
                                    flag1=1;
                                }
                            }
                            if(j-1>=1){
                                if(A[i-1][j-1]=='*'){
                                   // printf("D7 bomb ase %d %d\n",i-1,j-1);
                                    res++;
                                    //printf("ekohn %d\n",res);
                                    flag1=1;
                                }
                            }
                            //printf("Aasdsadsads %c\n",A[i-1][j]);
                            if(A[i-1][j]=='*'){
                                 //printf("D* bomb ase %d %d\n",i-1,j);
                                    res++;
                                    //printf("ekohn %d\n",res);
                                    flag1=1;
                            }
                        }
                        if(flag1==1){
                            B[i][j]=res;
                        }
                        else{
                            B[i][j]=0;
                        }
                    }
                    //if(A[i][j]=='*' && B[i][j]=='*')B[i][j]='*';
                }
            }
            printf("Field #%d:\n",ct);
            for(i=1;i<=a;i++){
                for(j=1;j<=b;j++){
                    if(B[i][j]>=0 && B[i][j]<=10)printf("%d",B[i][j]);
                    else{
                        printf("%c",B[i][j]);
                    }
                }
                printf("\n");
            }
       //if(EOF)printf("\n");
    }
}
