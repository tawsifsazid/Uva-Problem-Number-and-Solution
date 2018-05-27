#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long n,i,j;
long long func(long long x);
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF){
        if(n==0)break;
        i=func(n);
        printf("f91(%lld) = %lld\n",n,i);
    }
}
long long func(long long a){
    if(a<=100){
       //printf("%lld\n",a);
       return (func(func(a+11)));
    }
    else if(a>=101){
        //printf("%lld\n",a);
        return (a-10);
    }
}
