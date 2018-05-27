#include<bits/stdc++.h>
#define N 1005
using namespace std;

int res,ct,cases,n;
int A[200],dp[110][50006];
int trydp(int i, int tot, int sum){
    if(i == n + 1 || tot == sum )return 0;
    if(dp[i][tot] != -1)return dp[i][tot];
    int res1=0,res2=0;
    if(tot + A[i] <= sum){
          res1 = A[i] + trydp(i+1,tot + A[i], sum);
    }
    res2 = trydp(i+1,tot,sum);
    dp[i][tot] = max(res1,res2);
    //printf("DP[%d][%d] = %d\n",i,tot,dp[i][tot]);
    return dp[i][tot];
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    int i,j;
    while(cases--){
        scanf("%d",&n);
        int sum = 0;
        memset(dp , -1, sizeof dp);
        for(i=1;i<=n;i++){
            scanf("%d",&A[i]);
            sum = sum  + A[i];
        }
        int u = trydp(1,0,sum/2);
        //printf("%d\n",u);
        printf("%d\n",abs((sum-u)-u));
    }
}
