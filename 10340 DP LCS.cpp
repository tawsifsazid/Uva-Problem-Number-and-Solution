#include<bits/stdc++.h>
#define N 1005
#define ll long long
using namespace std;

int res,ct,cases,n;
string A,B;
int dp[500][500],len1,len2;
int trydp(int p1,int p2){
    if(p1 == len1 || p2 == len2 )return 0;
    if(dp[p1][p2] != -1) return dp[p1][p2];
    int r1=0,r2=0,r3=0;
    if(A[p1] == B[p2])return  1 + trydp(p1 + 1, p2 + 1);
    else{
        r1 = r1 + trydp(p1, p2 + 1);
        r2 = r2 + trydp(p1 + 1, p2);
        r3 = max(r1,r2);
    }
    dp[p1][p2] = r3;
    //printf("%d %d = %d\n",p1,p2,r3);
    return dp[p1][p2];
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>A>>B){
        len1 = A.size();
        len2 = B.size();
        //printf("%d\n",len1);
        memset(dp , -1, sizeof dp);
        if(trydp(0,0) == len1)printf("Yes\n");
        else{
            printf("No\n");
        }
    }
}
