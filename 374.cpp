#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
long long b,p,m,c;
long long bigmod(long long b,long long p,long long m);
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lld %lld %lld",&b,&p,&m)!=EOF){
        printf("%lld\n",bigmod(b,p,m));
    }
}
long long bigmod(long long b,long long p,long long m){
    if(p==0){
        return 1;
    }
    else if(p%2){
        return ((b%m)*(bigmod(b,p-1,m)))%m;
    }
    else{
        c=bigmod(b,p/2,m);
        return ((c%m)*(c%m))%m;
    }
}
