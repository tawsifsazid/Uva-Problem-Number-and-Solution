#include<bits/stdc++.h>
#define N 1005
#define ll long long
using namespace std;

int ct=1,cases,n,k;
int dp[200][200],use[200][200];
int trydp(int nisi , int sum){
  if(nisi == k){
    //printf("dhukse\n");
    if(sum == 0)return 1;
    return 0;
  }
  if(use[nisi][sum]== ct){
        //printf("DHUKLOOOOOO\n");
        return dp[nisi][sum];
  }
  int i,res = 0;
  for(i=0;i<=n;i++){
    //printf("sum = %d, i = %d and res = %d\n",sum,i,res);
    if(sum - i >= 0){
        //printf("%d %d\n",nisi + 1,sum-i);
        res = (res + trydp(nisi+1,sum - i))%1000000;
    }
  }
  //printf("baire %d %d\n",nisi,sum);
  use[nisi][sum] = ct;
  dp[nisi][sum] = res;
   return res ;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&n,&k)!=EOF){
        if(n==0 && k==0)break;
       // memset(dp , -1 , sizeof dp);
        int a = 0;
        printf("%d\n", trydp(0,n));
        ct++;
    }

}
