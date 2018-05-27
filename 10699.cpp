#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long i,cases,n,j,k,res,prime[1000609],isprime[1000609];
long long yeahprime();
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    yeahprime();
    while(scanf("%lld",&n)!=EOF){
        if(n==0)break;
        res=0;
        for(i=1;prime[i]<=n;i++){
            if(n%prime[i]==0){
                res++;
            }
        }
        printf("%lld : %lld\n",n,res);
    }
}
long long yeahprime(){
    prime[1]=2;
    k=1;
    for(i=3;i<=1000500;i++)isprime[i]=0;
    for(i=3;i<=1000500;i=i+2){
        if(isprime[i]==0){
            k++;
            prime[k]=i;
            //printf("%lld\n",prime[k]);
        }
        if(isprime[i]!=1){
           for(j=i*i;j<=1000500;j=j+i){
                isprime[j]=1;
           }
        }
    }
}
