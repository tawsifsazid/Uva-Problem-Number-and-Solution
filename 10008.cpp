#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<set>

using namespace std;

int len,i,j,k,res,ct,cases,n,B[400],high;
char A[20000];
int main(){
    for(i=0;i<=300;i++)B[i]=0;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d\n",&cases);
    while(cases--){
        gets(A);
        high=0;
        //getchar();
        len=strlen(A);
        //printf("%d\n",len);
        for(i=0;i<len;i++){
            if(A[i]>=97 && A[i]<=122){
                //printf("dhukse 1\n");
                A[i]=A[i]-32;
                B[A[i]]++;
            }
            else if(A[i]>=65 && A[i]<=90){
                //printf("dhukse 2\n");
                B[A[i]]++;
            }
        }
    }
        //sort(B+65,B+90);
        //reverse(B+65,B+90);
        for(i=65;i<=90;i++){
            if(B[i]>high){
                high=B[i];
            }
        }
        for(i=high;i>0;i--){
            for(j=65;j<=90;j++){
                if(i==B[j]){
                    printf("%c %d\n",j,B[j]);
                }
            }
        }

}
