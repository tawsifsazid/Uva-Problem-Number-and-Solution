#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007

int ct=0,cases;
ll n,dp[102],fact[15];
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
void f(){
    ll i,j,k;
    fact[0] = 1;
    for(i=1;i<=12;i++){
        fact[i] = fact[i-1]*i;
    }
}
void der(){
    ll i,j,k;
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    for(i=3;i<=12;i++){
        dp[i] = (i-1)*(dp[i-1]+dp[i-2]);
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    f();
    der();
    scanf("%d",&cases);
    while(cases--){
        scanf("%lld",&n);
        printf("%lld/%lld\n",dp[n],fact[n]);
    }

}
