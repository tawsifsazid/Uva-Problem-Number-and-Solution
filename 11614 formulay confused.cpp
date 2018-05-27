#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
int cases;
double n,sd,a;
long long res;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
    scanf("%lf",&n);
    sd=(1+(4*n*2));
    a=sqrt(sd);
    res=long((-1 + a)/2);
    printf("%lld\n",res);
    }
}
