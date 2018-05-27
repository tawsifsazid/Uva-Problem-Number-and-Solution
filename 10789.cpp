#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int k,len,ct=0,i,cases,n,j,res,A[500],B[500],flag,flag1;
char b[2005];

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        for(i=1;i<=490;i++){
                A[i]=0;
                B[i]=0;
        }
        k=0;
        ct++;
        flag=0;
        res=0;
        flag1=0;
        scanf("%s",b);
        len=strlen(b);
        for(i=0;i<len;i++){
            A[b[i]]++;
            //printf("%d %d \n",b[i],A[b[i]]);
        }
        for(i=1;i<=130;i++){
            flag=0;
            if(A[i]!=0 && A[i]!=1){
                    //printf("check kortese %d\n",A[i]);
                for(j=2;j<=sqrt(A[i]);j++){
                    if(A[i]%j==0){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    k++;
                    B[k]=i;
                    //printf("k %d %d\n",k,B[k]);
                }
            }
        }
        printf("Case %d: ",ct);
        for(i=1;i<=130;i++){
            if(B[i]!=0){
               printf("%c",B[i]);
               flag1=1;
            }
        }
        if(flag1==0){
            printf("empty\n");
        }
        else{
            printf("\n");
        }
    }
}
