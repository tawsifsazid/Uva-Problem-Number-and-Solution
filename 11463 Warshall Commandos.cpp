#include<bits/stdc++.h>
#define inf 500000
using namespace std;

int res,ct=0,cases,n,s,d,cst,u,v,m;
int result[250][250];
queue<int>Q;
void warshall(){
    int i,j,k;
    for(k=0; k < n ;k++){
        for(i = 0 ; i < n ; i++){
            for(j = 0 ; j < n ; j++){
                if(result[i][j] > result[i][k] + result[k][j]){
                    result[i][j] = result[i][k] + result[k][j];
                    //printf("%d %d == cost %d holo\n",i,j);
                }
            }
        }
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    int i,j;
    while(cases--){
        ct++;
        res = 0;
        scanf("%d %d",&n,&m);
        for(i=0;i<=240;i++){
             for(j=0;j<=240;j++){
                result[i][j]=inf;
             }
             result[i][i] = 0;
        }
        for(i=0;i<m;i++){
            scanf("%d %d",&u,&v);
            result[u][v] = 1;
            result[v][u] = 1;
        }
        //printf("shehs\n");
        warshall();
        scanf("%d %d",&s,&d);
        for(i=0;i<n;i++){
            if(result[s][i] + result[d][i] > res ){
                res = result[s][i] + result[d][i];
            }
        }
        printf("Case %d: %d\n",ct,res);
    }
}
