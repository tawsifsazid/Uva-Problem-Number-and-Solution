#include<bits/stdc++.h>
#define N 1005
#define ll long long
using namespace std;

int res,ct,cases,n,k;
int A[24],dp[24][5000];
int trydp(int i,int sum){
    //printf("%d %d\n",i,sum);
    if(i==n){
        if(sum == k)return 1;
        return 0;
    }
    if(dp[i][sum] != -1)return dp[i][sum];
    int r1=0,r2=0;
    if(A[i] + sum <= k) r1 = trydp(i+1,A[i] + sum);
    r2 = trydp(i+1,sum);
    dp[i][sum] = r1|r2;
    //printf("%d %d = %d\n",i,sum,dp[i][sum]);
    return dp[i][sum];
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    getchar();
     int num;
    while(cases--){
         memset(dp , -1 , sizeof dp);
         string str;
        int i=1,j=0;
        n = 1;
        getline(cin,str);
        //cout<<str<<endl;
        istringstream Z(str);
        while(Z >> num){
            A[i] = num;
            j = j + A[i];
            i++;
            //printf("%d %d\n",i,A[i]);
            n++;
        }
        //printf("n =%d\n",n);
        k = j/2;
        //printf("%d\n",k);
        int a = trydp(1,0);
       // printf("a = %d\n",a);
        if(a==1){
            if(k + k == j)printf("YES\n");
            else{
                printf("NO\n");
            }
        }
        else{
            printf("NO\n");
        }
    }
}
