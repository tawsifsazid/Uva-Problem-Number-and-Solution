#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int flag,i,cases,n,b,j,res,g,A[500],B[500],ct=0;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
        res=n;
        flag=0;
        ct++;
        if(n<0)break;
        A[0]=0;
        for(i=1;i<=12;i++){
            scanf("%d",&A[i]);
        }
        for(i=1;i<=12;i++){
            scanf("%d",&B[i]);
        }
        printf("Case %d:\n",ct);
        for(i=1;i<=12;i++){
            flag=0;
            for(j=0;j<i;j++){
                if(A[j]!=-1){
                    res=res+A[j];
                    n=0;
                    A[j]=-1;
                }
                if(res>=B[i]){
                    res=res-B[i];
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                printf("No problem! :D\n");
            }
            else{
                printf("No problem. :(\n");
            }
        }
    }
}
