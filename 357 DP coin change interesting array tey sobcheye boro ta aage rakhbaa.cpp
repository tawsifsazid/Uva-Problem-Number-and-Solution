#include<bits/stdc++.h>
#define N 1005
#define ll long long
using namespace std;

ll res,ct=1,cases,n;
ll dp[7][30002],use[7][30002],A[6];
ll trydp(ll pos, ll sum){
    //printf("%lld %lld\n",pos , sum);
    if(pos > 5){
        if(sum == 0){
            return 1;
        }
        return 0;
    }
    if(dp[pos][sum] != -1)return dp[pos][sum];
    ll r1=0,r2=0;
    if(sum - A[pos] >= 0){
        //printf("abar dhuklo\n");
            r1 = r1 + trydp(pos,sum - A[pos]);
    }
    r2 = r2 + trydp(pos+1,sum);
    //use[pos][sum] = ct;
    dp[pos][sum] = r1 + r2;
    //printf("%lld %lld = %lld\n",pos,sum,dp[pos][sum]);
    return dp[pos][sum];
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll i;
    A[1] = 50;
    A[2] = 25;
    A[3] = 10;
    A[4] = 5;
    A[5] = 1;
     memset(dp, -1, sizeof dp);
    while(scanf("%lld",&n)!=EOF){
       ll a;
       dp[1][n] =  trydp(1,n);
        ct++;
       if(dp[1][n]==1)printf("There is only 1 way to produce %lld cents change.\n",n);
       else{
            printf("There are %lld ways to produce %lld cents change.\n",dp[1][n],n);
       }
    }
}
