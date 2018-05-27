#include<bits/stdc++.h>
#define N 1005
#define ll long long
using namespace std;

double res,ct,cases,n;
ll  A[14] = {0,10000,5000,2000,1000,500,200,100,50,20,10,5};
ll dp[14][10006],a;
ll trydp(ll i, ll sum){
    if(i == 11+1){
        if(sum == 0){
            return 1;
        }
        return 0;
    }
    if(dp[i][sum]!=-1)return dp[i][sum];
    ll r1=0,r2=0;
    if(sum - A[i] >= 0)r1 = r1 + trydp(i,sum - A[i]);
    r2 = r2 + trydp(i+1,sum);
    dp[i][sum] = r1 + r2;
    return dp[i][sum];
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    memset(dp , -1 ,sizeof dp);
    while(scanf("%lf",&n)!=EOF){
        if(n==0.0)break;
         a = (ll)round(n*100);
        //printf("%lld\n",a);
        dp[1][a] = trydp(1,a);
         printf("%6.2lf%17lld\n",n,dp[1][a]);
    }
}
