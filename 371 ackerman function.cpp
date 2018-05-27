#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
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
ll callit(ll a,ll r){
    ll i,j,k;
    if ( a == 1) return 3;
    while(a!=1){
        r++;
         //cout<<r<<endl;
        if(a % 2 == 0)a = a/2;
        else a = (3*a)+1;


    }
    //cout<<endl;
    return r;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
        ll a,b,i,j,k,rem,res = -1,large=-1;
        while(scanf("%lld %lld",&a,&b)!=EOF){
            if(a == 0 && b == 0)break;
            res = -1;
            large = -1;
            if(a > b)swap(a,b);
            for(i=a;i<=b;i++){
               int c = callit(i,0);
               if(res < c){
                    res = c;
                    large = i;
                   //cout<<large<<endl;
               }
            }
            printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,large,res);
        }

}
