#include<bits/stdc++.h>
#define N 2000005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
#define eps 1e-9
using namespace std;

int ct=0,cases,m,n,fl;

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

struct C{
    int x,y;
}cord[2005];

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //scanf("%d",&cases);
    while(scanf("%d",&n)!=EOF){
        if(n == 0)break;
            ct++;
        fl = 0;
        int i,j,k;
        double dp[210][210];
        //memset(cord,0,sizeof 0);
        for(i=0;i<n;i++){
           for(j=0;j<n;j++){
               dp[i][j] = 900000000;
           }
        }

        //int  i,j,k,a,b,c;
        k  = 0;
        m = 0;


        for(i=0;i<n;i++){

            scanf("%d %d",&cord[i].x,&cord[i].y);
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                double xx =  (cord[i].x - cord[j].x);
                double yy =  (cord[i].y - cord[j].y);
                double dist = sqrt(((xx*xx) + (yy*yy)));
                dp[i][j] = dist;
                dp[j][i] = dist;
                //printf("%lf\n",dp[i][j]);
                m++;
            }
        }
         //cout<<"hehe"<<endl;
          //floyd(0,1);
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                //if(dp[i][j] > dp[i][k] || dp[i][j] > dp[k][j]){
                    dp[i][j] = min(dp[i][j],max(dp[i][k],dp[k][j]));
                //}
            }
        }
    }
            printf("Scenario #%d\n",ct);
            printf("Frog Distance = %.3lf\n\n",dp[0][1]);


    }

}
