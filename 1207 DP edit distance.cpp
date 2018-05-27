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
string a,b;
int dp[N][N];
int len1,len2;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>len1>>a){
            cin>>len2>>b;
        memset(dp,0,sizeof dp);
        int i,j;
        for(i=0;i<=len1;i++){
            //printf("ss\n");
            for(j=0;j<=len2;j++){
                    //printf("dd\n");
                if(i == 0)dp[i][j] = j;
                else if(j == 0)dp[i][j]=i;
                else if(a[i-1] == b[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    dp[i][j] =1 + min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
                }
            }
        }
        printf("%d\n",dp[len1][len2]);
    }
}
