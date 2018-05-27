#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
char A[2000];
long long res,i,j,k,len,a,res1,B[1009],c,b;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%s",A)!=EOF){
        res=0;
        len=strlen(A);
        a=0;
        res1=0;
        k=0;
        c=1;
        if(len==1 && A[0]=='0')break;
        for(i=0;i<=1000;i++)B[i]=0;
        for(i=0;i<len;i++){
            res=res +  (A[i]-48);
        }
        a=res;
        if(res%9==0){
            while(a!=9){
               b=a;
               while(b!=0){
                res1=res1 + (b%10);
                b=b/10;
               }
               a=res1;
               res1=0;
               c++;
            }
            printf("%s is a multiple of 9 and has 9-degree %lld.\n",A,c);
        }
        else{
            printf("%s is not a multiple of 9.\n",A);
        }
    }
}
