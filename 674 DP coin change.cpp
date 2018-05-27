#include<bits/stdc++.h>
#define N 1005
#define ll long long
using namespace std;

int ct=1,cases,n;
int A[6],dp[6][7500],use[6][7500];
int trydp(int pos,int sum){
    if(pos > 5){
        if(sum == n)return 1;
        return 0;
    }
    if(use[pos][sum] == ct)return dp[pos][sum];
    int r1=0,r2=0,r3=0;
    if(sum + A[pos] <=n){
        r1 =r1 + trydp(pos,sum+A[pos]);
        //printf("%d\n",r1);
    }
    r2 =r2 + trydp(pos+1,sum);
    use[pos][sum] = ct;
    dp[pos][sum] = r1+r2;
    return dp[pos][sum];
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
        int i,j;
        A[1] = 50;
        A[2] = 25;
        A[3] = 10;
        A[4] = 5;
        A[5] = 1;
        printf("%d\n",trydp(1,0));
        ct++;
    }
}
