#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int i,j,k,res,len,flag;
char A[1000],B[1000],C[1000];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(gets(A)){
            k=-1;
            flag=0;
        len=strlen(A);
        if(len==4 && A[0]=='D' && A[1]=='O' && A[2]=='N' && A[3]=='E')break;
        for(i=0;i<len;i++){
            if(A[i]>=65 && A[i]<=90){
                A[i]=A[i]+32;
            }
        }
        for(i=0;i<len;i++){
            if( A[i]!='.' &&  A[i]!=',' &&  A[i]!='?' &&  A[i]!='!' &&  A[i]!=' '){
                k++;
                C[k]=A[i];
            }
        }
        k=-1;
        for(i=len-1; i>=0; i--){
            if( A[i]!='.' &&  A[i]!=',' &&  A[i]!='?' &&  A[i]!='!' &&  A[i]!=' '){
                k++;
                B[k]=A[i];
            }
        }
        for(i=0;i<=k;i++){
            if(C[i]!=B[i]){
                flag=1;
                printf("Uh oh..\n");
                break;
            }
        }
        if(flag==0)printf("You won't be eaten!\n");
    }
}
