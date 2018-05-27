#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007



using namespace std;

vector<int>G[105];

int ct,cases,A[105][105],vis[105],n,flag[2][105],ans[105][105];

///dir array for Queen int dxq[10] = {-1,-1,-1,1,1,1,0,0};
///dir array for Queen int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};
/*int leap(int year){
   	if( year%4 == 0 && year%100 == !0 )
            return 1;
	else if (year%100 == 0 && year%400 == 0)
            return 1;
	else
        return 0;
}*/
void dfs(int s){
    int i,j,k;
   if(vis[s] == 0){
         vis[s] = 1;
        for(i=0;i<G[s].size();i++){
            int v = G[s][i];
            dfs(v);
        }
   }
   else return ;
}


int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        ct++;
        int i,j,k;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                scanf("%d",&A[i][j]);
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(A[i][j] == 1){
                    G[i].push_back(j);
                }
            }
        }
        memset(vis,0,sizeof vis);
        memset(flag,0,sizeof flag);
        memset(ans,0,sizeof ans);
        dfs(0);
        for(i=0;i<n;i++){
            if(vis[i] == 0){
                 //   cout<<i<<endl;
                flag[0][i] = -1;
            }
        }

        for(i=1;i<n;i++){
            memset(vis,0,sizeof vis);
            vis[i] = 1;
            dfs(0);
            for(j=0;j<n;j++){
                if(vis[j] == 0 && flag[0][j] != -1){
                    ans[i][j] = 5;
                    //cout<<i<<j<<endl;
                }
            }
        }
        //for(i=0;i<n;i++){
        //    for(j=0;j<n;j++){
                //if(ans[i][j] == 5)cout<<"i = "<<i<<" dominates j = "<<j<<endl;
        //    }
        //}
        printf("Case %d:\n",ct);
        int totmin = (2*n) - 1;
        int totline = n + 1;
            for(i=0;i<totline;i++){
                printf("+");
                for(j=0;j<totmin;j++){
                    printf("-");
                }
                printf("+\n");
                if(i < n)printf("|");
                for(j=0;j<n && i < n;j++){
                    if((ans[i][j] == 5  || i == j  || i == 0)&& flag[0][j]==0){
                        printf("Y");
                    }
                    else{
                        printf("N");
                    }
                    printf("|");
                }
                if(i<n)printf("\n");
            }



        for(i=0;i<=100;i++){
            G[i].clear();

        }
    }

}
