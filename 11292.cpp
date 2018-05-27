#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

int n,m,low=0,flag=0,D[30000],K[30000],i,j,res1,h,res,countt;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&n,&m)!=EOF){
        if(n==0 && m==0)break;
        flag=0;
        res=0;
         for(i=0;i<=20000;i++){
                D[i]=0;
                K[i]=0;
        }
        if(n>m){
             for(i=0;i<n;i++){
                scanf("%d",&D[i]);
             }
             for(i=0;i<m;i++){
                scanf("%d",&j);
            }
            printf("Loowater is doomed!\n");
        }
       else{
            for(i=0;i<n;i++){
                scanf("%d",&D[i]);
            }
            sort(D,D+i);
            for(i=0;i<m;i++){
                scanf("%d",&K[i]);
            }
            sort(K,K+i);
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    if(D[i]<=K[j] && K[j]!=-1 && D[i]!=-1){
                        //printf("ekhon dragon %d knight %d\n",D[i],K[i]);
                        D[i]=-1;
                        res=res+K[j];
                        K[j]=-1;
                    }
                }
            }
            for(i=0;i<n;i++){
                if(D[i]!=-1){
                    flag=1;
                    break;
                }
            }
            if(flag==1)printf("Loowater is doomed!\n");
            else{
                printf("%d\n",res);
            }
       }
    }
}
