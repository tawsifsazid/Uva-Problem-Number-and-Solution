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

int i,cases,n,b,j,m,res,g,flag,v,x,A[100];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
         flag=0;
         res=0;
         if(n==0)break;
         queue<int>q;
         for(i=1;i<=n;i++){
            q.push(i);
         }
         i=0;
         while(!q.empty()){
            if(flag==0){
                res=q.front();
                //printf("ekhon %d\n",res);
                A[i]=res;
                i++;
                q.pop();
                flag=1;
            }
            else if(flag==1){
                flag=0;
                v=q.front();
                q.push(v);
                q.pop();
            }
         }
         printf("Discarded cards:");
         //printf("ekhon i er maan %d\n",i);
         for(j=0;j<i;j++){
            if(A[j]!=res){
                printf(" %d",A[j]);
                if(j!=i-2){
                     //printf("%d %d",i-1,j);
                    printf(",");
                }
            }
         }
         printf("\n");
         printf("Remaining card: %d\n",res);
    }
}
