#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define ull unsigned long long int
#define pare pair<int,int>
using namespace std;

int ct=0,cases,n,k,h;
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
ull mult(int a){
    ull b = 1,gun = 10,res=1;
    while(1){
        if(b % a == 0)break;
        b = ((b*10)+1)%a;
        //if(b>10000)break;
        res++;

    }
     //printf("%lld\n",res);
    return res;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
        ll ans = mult(n);
        printf("%llu\n",ans);
    }

}
