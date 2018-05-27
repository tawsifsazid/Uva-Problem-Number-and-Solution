#include<bits/stdc++.h>

using namespace std;

long long i,j,k,res,ct=0,cases,n,A[102],possible;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&cases);
    while(cases--){
        ct++;
        res=1;
        scanf("%lld",&n);
        for(i=0;i<n;i++){
            scanf("%lld",&A[i]);
        }
        sort(A , A + n);
        possible=0;
        for(i=0;i<n;i++){
            res = (res%1000000007)*(A[i]-possible);
            possible++;
        }
        printf("Case %lld: %lld\n",ct,res%1000000007);
    }
}
