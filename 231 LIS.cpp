#include<bits/stdc++.h>

using namespace std;

int res,ct=0,cases,n,fl=0;
int lis[100010],A[100010];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j;
    while(scanf("%d",&n)!=EOF){
        ct++;
        int k=0;
        if(n==-1)break;
        if(fl>0)printf("\n");
        fl++;
        k++;
        A[k] = n;
        int a,ans=0;
        while(scanf("%d",&a)){
            if(a == -1)break;
            //printf("ggg\n");
            k++;
            A[k] = a;
        }
        for(i=1;i<=k;i++)lis[i] =1;
        for(i=1; i<=k ; i++){
            for(j=i+1;j<=k;j++){
                if(A[j] < A[i] && lis[i] + 1 > lis[j]){
                    lis[j] = lis[i] + 1;
                }
            }
        }
        for(i=1;i<=k;i++){
            ans = max(lis[i],ans);
        }
        printf("Test #%d:\n",ct);
        printf("  maximum possible interceptions: %d\n",ans);
    }
}
