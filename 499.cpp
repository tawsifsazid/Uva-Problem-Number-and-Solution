#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int len,i,cases,n,b,j,m,res,g,B[1009],maxx,ch[1009],ch1,k,l;
char A[1000];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(gets(A)){
        for(i=1;i<=1000;i++)B[i]=0;
        len=strlen(A);
        maxx=0;
        k=0;
        l=0;
        for(i=0;i<len;i++){
            if((A[i]>=97 && A[i]<=122)||(A[i]>=65 && A[i]<=90)){
                //A[i]++;
                k=A[i];
                B[k]++;
                //printf("%d %c\n",B[k],k);
                //printf("%c",);
                //printf("%d %c\n",A[i],A[i]);
            }
        }
        for(i=0;i<=1000;i++){
            if(B[i]!=0){
                if(B[i]>maxx){
                    //printf("dhukse %d %c\n",B[i],i);
                    maxx=B[i];
                    //printf("%d\n",i);
                }
            }
        }
        for(i=0;i<=1000;i++){
            if(B[i]==maxx){
                printf("%c",i);
            }
        }
        printf(" %d\n",maxx);
    }

}

