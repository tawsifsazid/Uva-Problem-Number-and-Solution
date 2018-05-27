#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
//#define mod 1000000007
using namespace std;

ll ct=0,cases;
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
ll bigmod(ll base , ll power , ll mod){
    if(power == 0){
        return 1%mod;
    }
    else if(power % 2 == 0){
        ll ans = bigmod(base,power/2,mod)%mod;
        return ((ans%mod)*(ans%mod))%mod;
    }
    else{
        return (((base)%mod)*(bigmod(base,power-1,mod)%mod))%mod;
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
   scanf("%lld",&cases);
   while(cases--){
        ct++;
        ll n;
        scanf("%lld",&n);
        if(n==1)printf("Case #%lld: 1\n",ct);
        else if(n == 2)printf("Case #%lld: 1\n",ct);
        else{
            ll ans = bigmod(n,n-2,2000000011);
            printf("Case #%lld: %lld\n",ct,ans);
        }
   }


}
