#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int high,i,cases,n,b,len,j,m,res,g,B[600];
char A[600];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d\n",&cases);
    while(cases--){
        for(i=0;i<=500;i++)B[i]=0;
        high=0;
        gets(A);
        len=strlen(A);
        for(i=0;i<len;i++){
            if(A[i]>=65 && A[i]<=90){
                A[i]=A[i]+32;
                B[A[i]]++;
                //printf("%c %d\n",A[i],B[A[i]]);
            }
            else if(A[i]>=97 && A[i]<=122){
                B[A[i]]++;
                //printf("%c %d\n",A[i],B[A[i]]);
            }
        }
        for(i=1;i<=500;i++){
            if(high<B[i]){
                //printf("char %c\n",i);
                high=B[i];
            //printf("high== %d\n",high);
            }
        }
        //printf("high== %d\n",high);
        for(i=1;i<=500;i++){
            if(high==B[i]){
                printf("%c",i);
            }
        }
        printf("\n");
    }
}
