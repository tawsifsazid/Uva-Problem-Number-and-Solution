#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long a,b,c,res;

int main(){
    while(scanf("%lld %lld %lld",&a,&b,&c)!=EOF){
        if((a<b && a<c) || (a>b && a>c)){
            printf("A\n");
        }
        else if((b<a && b<c) || (b>a && b>c)){
            printf("B\n");
        }
        else if((c<b && c<a) || (c>b && c>a)){
            printf("C\n");
        }
        else{
            printf("*\n");
        }
    }
}
