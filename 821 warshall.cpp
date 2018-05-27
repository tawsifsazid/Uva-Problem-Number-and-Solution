#include<bits/stdc++.h>
#define N 105
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
void warshall(int n){
    int i,j,k;
    for(k=1;k<=n;k++){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(dp[i][j] > dp[i][k] + dp[k][j]){
                    dp[i][j] = dp[i][k] + dp[k][j];
                }
            }
        }
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(1){
        map<int ,int>q;
        string a;
        getline(cin,a);
        istringstream Z(a);
        int d1,d2;
        ct++;
        int i,j,k,x,y,largest=1,res=0;
        for(i=0;i<=100;i++){
            for(j=0;j<=100;j++){
                dp[i][j] = 2000000;
            }
        }
         Z>>d1>>d2;
         //printf("d2 = %d %d\n",d1,d2);
        if(d1==0 && d2 ==0)break;
        else {
             if(q[d1] == 0){
                q[d1] = largest;
                //cout<<d1<<" "<<q[d1]<<endl;
                largest++;
            }
            if(q[d2]==0){
                q[d2] = largest;
                 //cout<<d2<<" "<<q[d2]<<endl;
                largest++;
            }
            dp[q[d1]][q[d2]] = 1;
        }
        while(Z>>x>>y){
            if(x==0 && y==0)break;
            //printf("d1 = %d %d\n",d1,d2);
            //printf("x=%d and y=%d\n",x,y);
            if(q[x] == 0){
                q[x] = largest;
                //cout<<x<<" "<<q[x]<<endl;
                largest++;
            }
            if(q[y]==0){
                q[y] = largest;
                 //cout<<y<<" "<<q[y]<<endl;
                largest++;
            }
            dp[q[x]][q[y]] = 1;
        }
        largest--;
        int vag = largest*(largest -1);
        warshall(largest);
        //printf("hehe %d and largest = %d\n",dp[1][1],largest);
        for(i=1;i<=largest;i++){
            for(j=1;j<=largest;j++){
                //printf("now i=%d and j=%d and res = %d\n",i,j,dp[i][j]);
                if(j == i){

                }
                else{
                    res = res + dp[i][j];
                    //printf(" res %d\n",res);
                }
            }
        }
        double d = (double)(res)/(int)vag;
        printf("Case %d: average length between pages = %.3lf clicks\n",ct,d);
    }
}
