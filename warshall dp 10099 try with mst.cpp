#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
using namespace std;

int ct=0,cases,n,r;
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
int dp[105][105];
void warshall(){
    int i,j,k;
    for(k=1;k<=n;k++){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                dp[i][j] = max(dp[i][j],min(dp[i][k],dp[k][j]));
            }
        }
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&n,&r)!=EOF){
        ct++;
        if(n == 0 && r == 0)break;
        //int fl = 0;
        //if(fl!=0)

        //fl++;
        int i,j,k;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                //dp[i][j] = 999999999;
                dp[i][j] = 0;
            }
        }
        int a,b,p;
        for(i=1;i<=r;i++){
            scanf("%d %d %d",&a,&b,&p);
            dp[a][b] = p - 1;
            dp[b][a] = p - 1;
            //cout<<p<<endl;
        }
        warshall();

        scanf("%d %d %d",&a,&b,&p);


        int ans = ceil((double(p)/double(dp[a][b])));


        printf("Scenario #%d\n",ct);
        printf("Minimum Number of Trips = %d\n",ans);
         printf("\n");

    }


}
