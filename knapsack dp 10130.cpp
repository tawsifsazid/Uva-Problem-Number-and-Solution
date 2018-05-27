#include<bits/stdc++.h>
#define N 1005
using namespace std;

int res,ct,cases,n,cantake,object,man,maxi;
int dp[N][N],cost[N],weight[N];
int func(int i, int cap){
    int res1=0,res2 =0;
    if(i == object+1)return 0;
    if(dp[i][cap]!=-1)return dp[i][cap];
    if(cap + weight[i] <= cantake){
        res1 =cost[i] + func(i+1,cap + weight[i]);
    }
    res2 = func(i+1,cap);
    dp[i][cap]  = max(res1,res2);
    //printf("%d\n",dp[i][cap]);
    return dp[i][cap];
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        int i,j;
        res = 0;
        scanf("%d",&object);
        for(i=1;i<=object;i++){
            scanf("%d %d",&cost[i],&weight[i]);
        }
        scanf("%d",&man);
        for(i=1;i<=man;i++){
            cantake = 0;
            scanf("%d",&cantake);
            maxi = 0;
            memset(dp , -1, sizeof dp);
            res = res +  (func(1,0));
        }
        printf("%d\n",res);
    }
}
