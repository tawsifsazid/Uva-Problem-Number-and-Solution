#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

unsigned long long int n,a,res,res1;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%llu",&n)!=EOF){
        a=(n+1)/2;
        res=a*a;
        res=(res*2)-1;
        res1=res + (res-2) + (res-4);
        printf("%llu\n",res1);
    }
}
