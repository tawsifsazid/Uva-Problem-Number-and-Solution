#include<bits/stdc++.h>

using namespace std;

int res,ct=0,cases,n,s;
int A[40000];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j,k;
    scanf("%d",&cases);
    while(cases--){
        int pre=0 , start = 0, endd = 0, diff = 0 , early = 0, shuru=0;
        int ans = 0;
        ct++;
        memset(A,0 , sizeof A);
        scanf("%d",&n);
        for(i=1;i<=n-1;i++){
            scanf("%d",&A[i]);
        }
        res = 0;
        for(i=1;i<=n-1;i++){
            res = res + A[i];
            if(res < 0){
                start = i;
                //printf("ekhon start %d\n",start);
                res = 0;
            }
            else if(res > ans || (res == ans &&((endd-shuru)<(i - start)))){
                ans = res;
                endd = i;
                shuru = start;
                //printf("wow end = %d shuru = %d\n",i,start);
            }
        }
        if(ans > 0){
            printf("The nicest part of route %d is between stops %d and %d\n",ct,shuru+1,endd+1);
        }
        else{
            printf("Route %d has no nice parts\n",ct);
        }
    }
}
