#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007

ll ct,cases;
ll n,m,dp[1005],nck[21][21];
using namespace std;

///dir array for Queen int dxq[10] = {-1,-1,-1,1,1,1,0,0};
///dir array for Queen int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};
/*int leap(int year){
   	if( year%4 == 0 && year%100 == !0 )
            return 1;
	else if (year%100 == 0 && year%400 == 0)
            return 1;
	else
        return 0;
}*/
ll trydp(ll n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(dp[n] != -1)return dp[n];
    ll res = 0;
    res = res + (n-1)*(trydp(n-1) + trydp(n-2));
    dp[n] = res;
    return dp[n];
}
ll ncr(){
    ll i,j,k;

    for(i=0;i<=20;i++){
        for(j=0;j<=20;j++){
            if(i == j || j==0){
                nck[i][j]  = 1;
            }
            else {
                nck[i][j] = nck[i-1][j] + nck[i-1][j-1];
            }
        }
    }
    //cout<<nck[3][0]<<endl;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    memset(dp,-1,sizeof dp);
    memset(nck,-1,sizeof nck);
    trydp(20);
    ncr();
    while(scanf("%lld",&n)!=EOF){
        ll m,i,j;
        scanf("%lld",&m);
        ll ans = 0;
        dp[0]= 1;
        dp[1] = 0;
        dp[2] = 1;
        //cout<<dp[3]<<endl;
        for(i=0;i<=m;i++){
            ans = ans + (nck[n][i]*dp[n-i]);
            //cout<<ans<<endl;
        }
        printf("%lld\n",ans);
       // for(i=1;i<=20;i++){
        //    cout<<dp[i]<<endl;
       // }
//        cout<<now<<endl;
    }

}
