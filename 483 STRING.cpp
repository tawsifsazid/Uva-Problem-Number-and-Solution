#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int i,j,spc1,spc2,len1,m,flag,k;
char A[10000],ch;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(gets(A)){
          m=0;
        len1=strlen(A);
        for(i=0;i<len1;i++){
            if(A[i]==32 || i==len1-1){
            if(A[i]==32){
              for(j=m,k=i-1;j<=k;j++,k--){
                  ch=A[j];
                  A[j]=A[k];
                  A[k]=ch;
              }
              m=i+1;
               //printf("i=%d,m=%d\n",i,m);
            }
            else{
                 for(j=m,k=i;j<=k;j++,k--){
                  ch=A[j];
                  A[j]=A[k];
                  A[k]=ch;
                 }
                 m=i+1;
                 //printf("i=%d,m=%d\n",i,m);
            }
            }
        }
               for(i=0;i<len1;i++){
                    printf("%c",A[i]);
               }
                    printf("\n");
    }
}
