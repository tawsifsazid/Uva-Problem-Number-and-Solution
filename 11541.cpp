#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
using namespace std;

int i,cases,n,b,res,g,ct=0,k,j,len,m;
char A[1000];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    getchar();
    while(cases--){
        ct++;
        printf("Case %d: ",ct);
        k=0;
        gets(A);
        k=0;
        len=strlen(A);
        //printf("%d\n",len);
        for(i=0;i<len;i++){
          if(A[i]>=65 && A[i]<=90) {

          }
          else{
                m=i-1;
              //printf("dhukse %c %d\n",A[m],A[i]);
                b=0;
                k=0;
              for(j=i;(A[j]>=48 && A[j]<=57);j++){
                //printf("dhuks\n");
                b=(10*b)+(A[j]-48);
                //printf("%d\n",b);
              }
              for(k=1;k<=b;k++){
                    printf("%c",A[m]);
              }
              i=j;
          }
        }
        printf("\n");
    }
}
