#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007

ll ct,cases,n,k;

using namespace std;

ll A[106][106];

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
ll nck(){
    ll i,j,k;
    for(i=0;i<=100;i++){
        for(j=0;j<=i;j++){
            if(i == j || j == 0){
              A[i][j] = 1;
            }
            else A[i][j] = A[i-1][j] + A[i-1][j-1];
        }
    }
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    nck();
    while(scanf("%lld",&n)!=EOF){
        ll m;
        //cin>>m;
        //cout<<A[n][m]<<endl;
        ll i,j,k,ans =  1;
        scanf("%lld",&i);
        while(i --){
            scanf("%lld",&j);
            ans = ans * A[n][j];
            n = n - j;
        }
        printf("%lld\n",ans);

    }

}
