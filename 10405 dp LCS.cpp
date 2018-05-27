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
char a[N],b[N];
int len1,len2,dp[1005][1005];
int trydp(int i,int j){
    int ret1=0,ret2=0;
    if(i == len1 || j == len2) return 0;
    if(dp[i][j] != -1)return dp[i][j];
    if(a[i] == b[j])return  1 + trydp(i+1,j+1);
        ret1 = ret1 + trydp(i+1,j);
        ret2 =  ret2 + trydp(i,j+1);
         dp[i][j] = max(ret1,ret2);
     return dp[i][j];
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(gets(a)){
        gets(b);
        len1 = strlen(a);
        len2 = strlen(b);
        memset(dp , -1 , sizeof dp);
        printf("%d\n",trydp(0,0));
    }
}
