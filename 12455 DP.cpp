#include<bits/stdc++.h>
#define N 1005
#define ll long long
using namespace std;

int res,ct,cases,n,p;
int dp[2000][2000],A[25];
int trydp(int pos , int sum){
    if(pos == p+1){
        if(sum == n)return 1;
        return 0;
    }
    int r1=0,r2=0;
    if(dp[pos] [sum] != -1)return dp[pos][sum];
    if(sum + A[pos] <= n) r1 = trydp(pos + 1,sum + A[pos]);
    r2 = trydp(pos+1,sum);
    dp[pos][sum] = r1 | r2;
    //printf("dp %d %d = %d\n",pos,sum,dp[pos][sum]);
    return dp[pos][sum];
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        scanf("%d",&n);
        memset(dp , -1, sizeof dp);
        memset(A,0,sizeof A);
        int i,j;
        scanf("%d",&p);
        for(i=1;i<=p;i++){
            scanf("%d",&A[i]);
        }
        if(trydp(1,0) == 0)printf("NO\n");
        else{
            printf("YES\n");
        }
    }
}
