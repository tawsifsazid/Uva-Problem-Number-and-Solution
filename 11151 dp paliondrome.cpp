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
int dp[N][N];
char a[N];
int trydp(int i,int j){
    if(i==j)return 1;
    if(i>j) return 0;
    if(dp[i][j] != -1)return dp[i][j];
     int ret=0;
    if(a[i]==a[j])return ret =  2 + trydp(i+1,j-1);
    else{
        ret =ret + max(trydp(i+1,j),trydp(i,j-1));
    }
    dp[i][j] = ret;
    return dp[i][j];
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>cases;
    getchar();
    while(cases--){
         memset(dp,-1,sizeof dp);
        gets(a);
        cout<<trydp(0,strlen(a)-1)<<endl;
    }
}
