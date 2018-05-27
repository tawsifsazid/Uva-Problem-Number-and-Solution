#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int flag,i,cases,n,b,j,m,res,g,len1,B[6000],len2;
char A[6000],C[6000];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
         flag=0;
        for(i=0;i<=5000;i++)B[i]=0;
        scanf("%s",A);
        len1=strlen(A);
        for(i=0;i<len1;i++){
            if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'){
                B[i]=-1;
            }
        }
        scanf("%s",C);
        len2=strlen(C);
        for(i=0;i<len2;i++){
            if(C[i]=='a'||C[i]=='e'||C[i]=='i'||C[i]=='o'||C[i]=='u'){
                if(B[i]==-1){

                }
                else{
                    flag=1;
                    break;
                }
            }
            else{
                if(A[i]==C[i]){

                }
                else{
                    flag=1;
                    break;
                }
            }
        }
        if(len1==len2 && flag==0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}
