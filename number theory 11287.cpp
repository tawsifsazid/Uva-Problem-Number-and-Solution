#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
using namespace std;

ll ct=0,cases;
ll flag[320005],p,a;
vector<int>P;
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
    P.push_back(2);
    for(i=3;i<=320000;i=i+2){
        if(flag[i] == -1){
            P.push_back(i);
            //cout<<i<<endl;
        }
        if(flag[i] == -1){
            for(j=i*i;j<=320000;j=j+i){
                flag[j] = 0;
            }
        }

    }
}
ll bigmod(ll base,ll power,ll mod){
    if(power == 0){
        return 1%mod;
    }
    else if(power % 2 == 0){
        ll ans = bigmod(base,power/2,mod) % mod;
        return ((ans%mod)*(ans%mod))%mod;
    }
    else{
        return ((base%mod)*(bigmod(base,power-1,mod)%mod))%mod;
    }
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    sieve();
    while(scanf("%lld %lld",&p,&a)!=EOF){
       if(p==0 && a==0)break;
       ll ans =  bigmod(a,p,p);
       int fl = 0;
       //cout<<ans<<endl;
       int sq = sqrt(p);
       for(int i=0;i<P.size() && P[i] <= sq;i++){
            if(p % P[i] == 0){
                fl = 1;
                break;
            }
       }
       if(fl == 1 && ans == a){
            printf("yes\n");
       }
       else{
            printf("no\n");
       }
    }

}
