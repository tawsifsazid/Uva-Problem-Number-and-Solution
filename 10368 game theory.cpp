#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007

int ct=0,cases;

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
ll try_game(ll a,ll b){
    //cout<<"yoo"<<endl;
  if(b == 0) return 0;
  ll res  = 0;
  res = res | !try_game(b,a%b);
  if(res!= 1 && a/b > 1)res = res | !try_game(b+(a%b),b);
    //cout<<"always "<<res<<endl;
   return res;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        if (a == 0 && b == 0) break;

        if(b>a)swap(a,b);

        ll check = try_game(a,b);
        //cout<<check<<endl;
        if(check == 0)printf("Ollie wins\n");
        else printf("Stan wins\n");
    }

}
