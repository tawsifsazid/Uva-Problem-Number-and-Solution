#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
using namespace std;

ll ct=0,cases,n,k,h;
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
vector<ll>P;
ll flag[90000007];
void sieve(){
    memset(flag,-1,sizeof flag);
        ll i,j,k;
    P.push_back(2);
    for(i=3;i<=800000;i=i+2){
        if(flag[i] == -1){
            P.push_back(i);
            //cout<<i<<endl;
        }
        if(flag[i] == -1){
            for(j=i*i ; j<= 800000; j=j+i) {
                flag[j] = 1;
            }
        }
    }
}
ll nod(ll num){
    ll i,j,k,p,res = 1;
    for(i=0;i<P.size();i++){
        p = 0;
        if(num % P[i] == 0 && P[i] <= num){
            while(num % P[i] == 0){
                num = num / P[i];
                p++;
            }
            res = res*(p + 1);

        }
    }
    if(num!=1){
        res = res*2;
    }
    //cout<<"nod "<<res<<endl;
    return res;
}
ll euler(ll num){
    ll i,j,k,res = num;
    for(i=0;i<P.size();i++){
        if(num % P[i] == 0 && P[i]<=num){
            while(num % P[i] == 0){
                num = num / P[i];
            }
            res = res / P[i];
            res = res * (P[i]-1);
        }


    }
    if(num != 1){
        res = res / num;
        res = res*(num-1);
    }
     //cout<<"euler "<<res<<endl;
    return res;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    sieve();
    while(scanf("%lld",&n)!=EOF){
       if(n == 0)printf("0\n");
       else{
            ll x = nod(n);
            ll y = euler(n);

            ll res = n - ( x + y )+ 1;
            printf("%lld\n",res);
       }
    }
}
