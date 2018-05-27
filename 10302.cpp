#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

unsigned  long long int x,ans;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%llu",&x)!=EOF){
        ans=((x*(x+1))/2)*((x*(x+1))/2);
        printf("%llu\n",ans);
    }
}
