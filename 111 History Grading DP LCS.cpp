#include<bits/stdc++.h>

using namespace std;

int res,ct,cases,n,a;

int A[200],B[200],dp[200][200];
void init(){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            dp[i][j] = -1;
        }
    }
}
int lcs(int i, int j){
    if(i>n || j > n)return 0;
    if(dp[i][j] != -1)return dp[i][j];
    if(B[i] == A[j]){
            //printf("dhukse %d %d\n",B[i],A[j]);
            return 1 + lcs(i+1,j+1);
    }
    else{
            //printf("dhukse\n");
        int res1 = lcs(i,j+1);
        int res2 = lcs(i+1,j);
        res = max(res1,res2);
    }
    dp[i][j] = res;
    //printf("%d %d = %d\n",i,j,dp[i][j]);
    return dp[i][j];
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        B[a] = i;
    }
    for(i=1;i<=n;i++){

    }
    while(1){
        int fl = 0;
        init();
        memset(A, 0 ,sizeof A);
        res = 0;
        for(i=1;i<=n;i++){
            if(scanf("%d",&a)==EOF){
                fl = 1;
                break;
            }
            else{
                //cout<<m[a]<<endl;
                A[a] = i;
            }
        }
         if(fl == 1) break;
        printf("%d\n",lcs(1,1));
    }
}
