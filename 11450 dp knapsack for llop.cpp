#include<bits/stdc++.h>
#define N 1005
#define  ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases;
///dir array for Queen int dxq[10] = {-1,-1,-1,1,1,1,0,0};
///dir array for Queen int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};
/*int leap(int a){
    if(a%4==0){
        if(a%100==0){
            if(a%400==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}*/
int dp[205][25],C[25][25],k,c,m;
int trydp(int money,int garment){
    //printf("dhukse\n");
    if(money < 0)return -100000000;
    if(garment == c+1){
        //printf("hehe %d\n",money);
        return m - money;
    }
    if(dp[money][garment]!=-1)return dp[money][garment];
    int i,j=-1;
    for(i=1;i<=C[garment][0];i++){
        j = max(j,trydp(money-C[garment][i],garment + 1));
    }
    return dp[money][garment] = j;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        scanf("%d %d",&m,&c);
        memset(dp,-1,sizeof dp);
        int i,j,k;
        for(i=1;i<=c;i++){
            scanf("%d",&C[i][0]);
            for(j=1;j<=C[i][0];j++){
                scanf("%d",&C[i][j]);
            }
        }
        int ans = trydp(m,1);
        if(ans < 0)printf("no solution\n");
        else printf("%d\n",ans);
        memset(C,0,sizeof C);
    }
}
