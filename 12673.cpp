#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<set>

using namespace std;

int i,j,k,res,ct,cases,n,buy,point,A[700000],diff,n1,n2;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&n,&buy)!=EOF){
        point=0;
        k=0;
        for(i=1;i<=n;i++){
            scanf("%d %d",&n1,&n2);
            if(n1>n2){
                //printf("eikhane duhkfhse\n");
                point=point+3;
            }
            else{
                diff=n2-n1;
                A[k]=diff;
                k++;
            }
        }
        sort(A,A+k);
        j=buy;
        for(i=0;i<k;i++){
            if(j==0)break;
            if(A[i]<j){
                    j=j-(A[i]+1);
                    A[i]=-1;
                    point=point+3;
                     //printf("eikhane duhkfhse >>j===%d  %d\n",j,point);
            }
            else if(A[i]==j){
                    j=0;
                    A[i]=0;
                    //point=point+1;
                     //printf("eikhaneooo duhkfhse\n");
            }
            else{
                break;
            }
        }
        for(i=0;i<k;i++){
            if(A[i]==0)point++;
        }
        printf("%d\n",point);
    }
}
