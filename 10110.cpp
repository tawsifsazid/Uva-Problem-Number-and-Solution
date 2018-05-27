#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long i,j,n,sq,flag;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF){
        if(n==0)break;
        sq=sqrt(n);
        //printf("%lld\n",sq);
        if((sq*sq)==n){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
}
