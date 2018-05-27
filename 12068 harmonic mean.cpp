#include<bits/stdc++.h>
# define ll long long
using namespace std;

ll gcd(ll a,ll b){
    while(b){
        a=a%b;
        swap(a,b);
    }
    return a;
}
ll lcm(ll a , ll b){
    return (a/gcd(a,b))*b;
}
ll cases,n,ct=0;
ll A[1000];
int main(){
    scanf("%lld",&cases);
    while(cases--){
          ct++;
          ll l;
         ll i,j;
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            scanf("%lld",&A[i]);
        }
        //gcd = A[1];
        l = A[1];
        //printf("%lld\n",l);
        for(i=2;i<=n;i++){
            l = lcm(l,A[i]);
        }
       // printf("lcm = %lld\n",l);
        ll res =0;
        for(i=1;i<=n;i++){
            res = res + (l/A[i]);
        }
        l = (l*n);
        //printf("lcm = %d\n",lcm);
        if(gcd(res,l)==1){
                printf("Case %lld: %lld/%lld\n",ct,l,res);
        }
        else{
                ll u =gcd(res,l);
                res = res /u;
                l = l/u;

                printf("Case %lld: %lld/%lld\n",ct,l,res);
        }
    }
}
