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

int i,cases,n,b,j,m,res,g,A[50000],flag;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&cases)!=EOF){
        if(cases==0)break;
        flag=1;
        for(i=0;i<cases;i++){
            scanf("%d",&A[i]);
        }
        sort(A,A+i);
        res=A[0];
        //for(j=0;j<i;j++)printf("%d\n",A[j]);
        for(j=1;j<i;j++){
            if((A[j]-res)>200){
                flag=0;
                break;
            }
            else{
                res=A[j];
            }
        }
        //printf("ekhon res=%d\n",res);
        reverse(A,A+i);
        res=(1422-A[0])+(1422-A[0]);
        if(res>200)flag=0;
        //for(j=0;j<i;j++)printf("%d\n",A[j]);
        for(j=1;j<i;j++){
            if((res-A[j])>200){
                //printf("%d %d\n",A[j],res);
                flag=0;
                break;
            }
            else{
                res=A[j];
            }
        }
        if(flag==1){
            printf("POSSIBLE\n");
        }
        else{
            printf("IMPOSSIBLE\n");
        }
    }
}
