#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007

ll ct=0,cases;
ll n,r,m,A[55],B[55],dp[55][55];
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
ll trydp(ll index,ll tot){
    if(dp[index][tot] != -1)return dp[index][tot];
    if(tot == r){
        return 1;
    }
    if(index >= n)return 0;
    ll res=0,koyta = B[index];

    for(ll j=0;j<=koyta;j++){
        if(j + tot <= r)
        res = res + trydp(index+1,tot+j);
    }
    dp[index][tot] = res;
    return dp[index][tot];

}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%lld %lld",&n,&m)!=EOF){
        ct++;
        if(n == 0 )break;
        ll i,j,num;
        memset(A,0,sizeof A);
        memset(B,0,sizeof B);
        for(i=0;i<n;i++){
            scanf("%lld",&num);
            A[num]++;
        }
        j = 0;
        for(i=0;i<=50;i++){
            if(A[i] != 0){
              B[j] = A[i];
              j++;
            }
        }
        printf("Case %lld:\n",ct);
        for(i=0;i<m;i++){
            memset(dp,-1,sizeof dp);
            scanf("%lld",&r);
            printf("%lld\n",trydp(0,0));
        }
    }

}
