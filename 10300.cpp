#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long cases,i,cows,farmer,frnd,res,ans,farm;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&cases);
    while(cases--){
            res=0;
        scanf("%lld",&farmer);
        for(i=1;i<=farmer;i++){
            scanf("%lld %lld %lld",&farm,&cows,&frnd);
                res=res + (farm*frnd);
        }
        printf("%lld\n",res);
    }
}
