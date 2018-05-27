#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
using namespace std;

int ct=0,cases,n,m;
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
        while(scanf("%d",&n)!=EOF){
                ct++;
            int dp[105][105],x;
            int i,j,k;
            for(i=0;i<=100;i++){
                for(j=0;j<=100;j++){
                    dp[i][j] = 999999999;
                }
            }
            for(i=0;i<n;i++){
                scanf("%d",&x);
                dp[1][x] = 1;
                dp[x][1] = 1;
            }
            int v,a,b;
            for(i=2;i<=19;i++){
                scanf("%d",&x);
                for(j=0;j<x;j++){
                  scanf("%d",&v);
                  dp[i][v] = 1;
                  dp[v][i] = 1;
                }
            }
            for(k=1;k<=20;k++){
                for(i=1;i<=20;i++){
                    for(j=1;j<=20;j++){
                        dp[i][j] = min(dp[i][j],(dp[i][k]+dp[k][j]));
                    }
                }
            }
            scanf("%d",&m);
            printf("Test Set #%d\n",ct);
            for(i=0;i<m;i++){
                scanf("%d %d",&a,&b);
                printf("%2d to %2d: %d\n",a,b,dp[a][b]);
            }
            printf("\n");

        }

}
