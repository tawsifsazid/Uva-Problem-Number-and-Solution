#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
using namespace std;


ll flag[320005],n;
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

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    sieve();
    while(scanf("%lld",&n)!=EOF){
        if(n == 0)break;
        ll i,j,k,ans = 0;
        for(i=0;i<P.size() && P[i]<= n;i++){
            int res = P[i];
            //cout<<res<<endl;
            if(res == n){
                ans++;
            }
            for(j=i+1;j<P.size() && P[j]<=n;j++){
                res = res + P[j];
                //cout<<" inner "<<res<<endl;
                if(res == n){
                    ans++;
                }
                else if(res> n)break;
            }
        }
        printf("%lld\n",ans);
    }

}
