#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long A[10009],B[10009],i,cases,n,b,j,m,res,diff,res1,diff1;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF){
        if(n==-1)break;
        res=1;
        res1=2;
        A[0]=0;
        A[1]=1;
        B[0]=1;
        B[1]=1;
        for(i=2;i<=n;i++){
            A[i]=A[i-1] + A[i-2];
            res=res + A[i];
            //printf("%lld\n",res);
            //printf("%lld\n",A[i]);
            B[i]=B[i-1] + B[i-2];
            res1= res1 + B[i];
            //printf("%lld %lld res1\n",B[i],res1);
        }
        //printf("%lld\n",A[n]);
        if(n==1)printf("1 2\n");
        else if(n==0)printf("0 1\n");
        else{
        printf("%lld %lld\n",res,res1);
        }
    }
}

