#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int cases,p,h,ans,n,lose,a,i,fri,j;
int A[10000];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        for(i=1;i<=3650;i++)A[i]=0;
        for(i=6,j=7;i<=3650;i=i+7,j=j+7){
                A[i]=1;
                A[j]=1;
        }
        ans=0;
        lose=0;
        scanf("%d",&n);
        scanf("%d",&p);
        for(i=1;i<=p;i++){
            scanf("%d",&a);
            ans=0;
            while(ans<=n){
                ans=ans+a;
                //printf("ekhon ans %d\n",ans);
                if(A[ans]==0){
                    A[ans]=-1;
                }
            }
        }
        for(i=1;i<=n;i++){
            if(A[i]==-1){
                //printf("i===%d\n",i);
                lose++;
            }
        }
        printf("%d\n",lose);
    }
}

