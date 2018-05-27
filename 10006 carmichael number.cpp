#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
using namespace std;

ll ct=0,cases,n,flag[65005];
vector<ll>P;

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
void sieve(){
    ll i,j,k;
    memset(flag,-1,sizeof flag);
    for(i=2;i<=65000;i++){
        if(flag[i] == -1){
            P.push_back(i);
           // cout<<i<<endl;
        }
        if(flag[i] == -1){
            for(j=i*i;j<=65000; j = j + i){
                flag[j] = 0;
            }
        }
    }
}
ll bigmod(ll a,ll p,ll mod){
    if(p == 0)return 1;
    else if(p % 2 == 0){
        ll ans = bigmod(a,p/2,mod);
        return ((ans%mod)*(ans%mod))%mod;
    }
    else{
        return ((a%mod)*((bigmod(a,p-1,mod))%mod))%mod;
    }
}
bool carmichael(ll n){
    int i,j,k;
    if(flag[n] == -1){
          // printf("prime\n");
        return false;
    }
    else{
        for(i=2;i<=n-1;i++){
            if(bigmod(i,n,n) != i){
                return false;
            }
        }
    }
    return true;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    sieve();
    while(scanf("%lld",&n)!=EOF){
        if(n == 0)break;
        int i,j,k,fl = 0;
       if(carmichael(n)){
            printf("The number %lld is a Carmichael number.\n",n);
       }
       else{
            printf("%lld is normal.\n",n);
       }

    }

}
