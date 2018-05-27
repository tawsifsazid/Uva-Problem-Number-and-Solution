#include<bits/stdc++.h>

using namespace std;

int res,ct,cases,n;
int A[10008];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
        if(n==0) break;
        res = 0;
        int ans = 0 ,i ,j;
        for(i=1; i <= n ; i++){
            scanf("%d",&A[i]);
        }
        for(i=1; i<=n ; i++){
            res = res + A[i];
            if( res > ans){
                ans = res ;
            }
            if(res < 0 ){
                res = 0;
            }
        }
        if(ans > 0)printf("The maximum winning streak is %d.\n",ans);
        else{
            printf("Losing streak.\n");
        }
    }
}
