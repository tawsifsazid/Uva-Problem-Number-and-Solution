#include<bits/stdc++.h>
#define N 15006
#define ll long long
#define inf  -100000
using namespace std;

int res,ct,cases,n,cap;
int dp[200][N],cost[200],favour[200];
int trydp(int i,int sum){
    //printf("%d %d\n",i,sum);
    if(sum > cap && cap <=1800)return inf;
    if(sum > cap + 200)return inf;
    if(sum > cap && sum <= 2000)return inf;
    if(i == n+1){
        return 0;
    }
    if(dp[i][sum] != -1)return dp[i][sum];
        int r1=0,r2 = 0;
        r1 = favour[i] + trydp(i+1,sum + cost[i]);
        r2 = r2 + trydp(i+1,sum);
        dp[i][sum] = max(r1,r2);
    //printf("%d %d = %d\n",i,sum,dp[i][sum]);
    return dp[i][sum];
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&cap , &n)!=EOF){
        int j;
        memset(dp , -1, sizeof dp);
        for(j=1;j<=n;j++){
            scanf("%d %d",&cost[j],&favour[j]);
        }
        //if(cap >2000)cap = cap + 200;
         int a =   trydp(1,0);
         printf("%d\n",a);
    }
}
