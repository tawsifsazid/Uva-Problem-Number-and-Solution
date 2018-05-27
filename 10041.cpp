#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
using namespace std;

int ct=0,cases,n,m,A[3005];
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
    scanf("%d",&cases);
    while(cases--){
        scanf("%d",&n);
        int i,j,k;
        for(i=0;i<n;i++){
            scanf("%d",&A[i]);
        }
        int res = 0,ans = 16000000;
        for(i=0;i<n;i++){
            res = 0;
            for(j=0;j<n;j++){
                res = res + abs(A[j] - A[i]);
            }
            ans = min(res,ans);
        }
        printf("%d\n",ans);
    }



}
