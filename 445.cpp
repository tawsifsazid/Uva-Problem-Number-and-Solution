#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long len,i,cases,n,b,j,m,res,g,sum,k;
char A[700000],temp[200000];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(gets(A)){
        sum=0;
        m=0;
        n=0;
        len=strlen(A);
        for(i=0;i<=len;i++){
             if(A[i]==NULL){
                    printf("\n");
                    break;
             }
            // printf("sum==%d\n",sum);
           if(isdigit(A[i])){
                sum=0;
                m=0;
                n=0;
                for(j=i;j<len && isdigit(A[j]);j++){
                    temp[m]=A[j];
                    m++;
                     //printf("j==%d and  A[j]==%c m==%d\n",j,A[j],m);
                }
                    i=j;
                    //printf("m er maan m==%d\n",m);
                    //printf("ekhon i er position %c\n",A[i]);

                    temp[m]=NULL;
                   //for(int y=0;temp[y]!=NULL;y++)printf("temp[y]== %c and y==%d\n",temp[y],y);
                   //printf("\n");
                for(g=0;temp[g]!=NULL;g++){
                        sum=sum + (temp[g]-48);
                }
                //printf("sum===%d\n",sum);
           }
           if(A[i]=='b'){
               //printf("dhukse\n");
                for(k=1;k<=sum;k++){
                    printf(" ");
                }
           }
           if(A[i]=='!'){
                printf("\n");
           }
           if(A[i]!='!' && A[i]!=NULL && A[i]!='b' && (A[i]<48 || A[i]>57)){
                for(g=1;g<=sum;g++){
                    //printf("sum=== %d\n",sum);
                    printf("%c",A[i]);
                }
           }
        }
    }
}
