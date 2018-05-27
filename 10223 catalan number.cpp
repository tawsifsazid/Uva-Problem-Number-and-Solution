#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007

ll ct,cases;
ll n,C[25];
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
void catalan(){
    ll i,j,k;
    C[0] = 1;
    C[1] = 1;
    C[2] = 1;
    for(i=3;i<=22;i++){
        for(j=1;j<i;j++){
            C[i] = C[i] + (C[j] * C[i-j]);
        }
        //cout<<C[i]<<endl;
    }
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll res = 0;
    catalan();
    while(scanf("%lld",&n)!=EOF){
        ll i,j,k,ans;
        for(i=2;i<=20;i++){
            if(C[i] == n){
                 ans = i;
                break;
            }
        }
        printf("%lld\n",ans-1);
    }

}
