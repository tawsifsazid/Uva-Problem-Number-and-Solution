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

int i,cases,n,b,j,m,res,g,flag=0,flag1;
int A[20][20],B[20][20];
char ch;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    getchar();
    while(cases--){
        flag=0;
        flag1=0;
        res=0;
        scanf("%d",&n);
        getchar();
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
              scanf("%c",&A[i][j]);
            }
            getchar();
            //printf("\n");
        }
       //printf("kirrrrrrrre\n");
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
              scanf("%c",&B[i][j]);
            }
            getchar();
            //printf("\n");
        }
        //printf("dhukse\n");
       for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(A[i][j]=='*' && B[i][j]=='x'){
                    flag=1;
                    //printf("dhukse\n");
                    break;
                }
            }
       }
       if(flag==0){
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                        res=0;
                        flag1=0;
                    if(B[i][j]=='x'){
                           //printf("%d %d\n",i,j);
                        if(j+1<=n){
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
                        if(i+1<=n){
                            if(j+1<=n){
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
                            if(j+1<=n){
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

                }
            }
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(B[i][j]>=0 && B[i][j]<=10)printf("%d",B[i][j]);
                    else{
                        printf("%c",B[i][j]);
                    }
                }
                printf("\n");
            }

       }
       if(flag==1){
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                        res=0;
                        flag1=0;
                    if(B[i][j]=='x' && A[i][j]!='*'){
                           //printf("%d %d\n",i,j);
                        if(j+1<=n){
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
                        if(i+1<=n){
                            if(j+1<=n){
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
                            if(j+1<=n){
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
                    if(A[i][j]=='*' && B[i][j]=='x')B[i][j]='*';
                    if(A[i][j]=='*' && B[i][j]=='.')B[i][j]=A[i][j];
                }
            }
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(B[i][j]>=0 && B[i][j]<=10)printf("%d",B[i][j]);
                    else{
                        printf("%c",B[i][j]);
                    }
                }
                printf("\n");
            }
       }
       if(cases)printf("\n");
    }
}
