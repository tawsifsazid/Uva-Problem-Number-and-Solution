#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long cases,ct=0,res,i,j,n,f[53];
long long fib();
int main(){
    fib();
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    scanf("%lld",&cases);
    while(cases--){
        ct++;
        scanf("%lld",&n);
        printf("Scenario #%lld:\n%lld\n",ct,f[n]);
        printf("\n");
    }
}
long long fib(){
    f[1]=2;
    f[2]=3;
    res=0;
    for(i=3;i<=52;i++){
        f[i]=f[i-1] + f[i-2];
        //printf("%lld %lld\n",i,f[i]);
    }
}
