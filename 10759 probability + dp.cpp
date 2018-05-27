#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007

using namespace std;


int ct=0,cases;
llu dp[30][250];
int n,x;

llu trydp(llu dice_left,llu score){
    //cout<<dice_left<<" "<<score<<endl;
    if(dice_left == 0){
        if(score >= x) return 1;
        else return 0;
    }

    if(dp[dice_left][score] != -1)return dp[dice_left][score];

    llu res = 0;
    for(ll i=1;i<=6;i++){
         res =  res + trydp(dice_left-1,score+i);
    }
    dp[dice_left][score] = res;
    //cout<<"res = "<<res<<endl;
    return dp[dice_left][score];
}
llu gcd(llu a,llu b){
    if(b == 0)return a;
    else return gcd(b,a%b);
}
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


int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&n,&x)!=EOF){
        if(n == 0 && x == 0)break;
        memset(dp,-1,sizeof dp);

        //cout<<dp[2][2]<<endl;
        llu ans = trydp(n,0);

        llu tot = pow(6.0,n);
        llu g = gcd(ans,tot);
        //cout<<ans<<" "<<tot<<" "<<g<<endl;
        ans = ans / g;
        tot = tot / g;
        if(ans == 0)printf("0\n");
        else if(tot == 1)printf("%llu\n",ans);
        else printf("%llu/%llu\n",ans,tot);
    }

}
