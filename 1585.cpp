#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int i,cases,n,b,j,m,res,g,c,len;
char A[100];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    getchar();
    while(cases--){
        res=0;
        c=0;
        scanf("%s",A);
        len=strlen(A);
        for(i=0;i<len;i++){
           if(A[i]=='O'){
               c++;
               res=res + c;
           }
           else{
              c=0;
           }
        }
        printf("%d\n",res);
    }
}
