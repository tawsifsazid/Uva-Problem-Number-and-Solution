#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
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
double dp[35][905];
map<string,int>M;
void warshall(){
    int i,j,k;
    for(k=1;k<=n;k++){
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(dp[i][j] < dp[i][k]*dp[k][j]){
                    dp[i][j] = dp[i][k] * dp[k][j];
                }
            }
        }
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){

        if(n == 0) break;
        ct++;
        int i,j,k=1;
        string a,b;
        for(i=1;i<=n;i++){
            for(j=1;j<=900;j++){
                dp[i][j] = 0.0;
            }
        }
        for(i=1;i<=n;i++){
            cin>>a;
            M[a] = k;
            //dp[k][k] = 1;
            k++;
        }
        scanf("%d",&m);
        double x;
        for(i=1;i<=m;i++){
            cin>>a>>x>>b;
            dp[M[a]][M[b]] = x;
        }
        warshall();
        int fl  = 0 ;
        for(i=1;i<=n;i++){
            if(dp[i][i] > 1.0){
                fl = 1;
                break;
            }
        }
        if(fl == 1)printf("Case %d: Yes\n",ct);
        else{
            printf("Case %d: No\n",ct);
        }
        M.clear();
    }
}
