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

int k,res,ct,cases,n,A[100];
int check(int y,int tot){
    //printf("%d %d\n",y,tot);
   if(y==5){
        if(tot==23)return 1;
        else{
            //printf("return 0\n");
            return 0;
        }
   }
   return check(y+1,tot*(A[y]))||check(y+1,tot-(A[y]))||check(y+1,tot+(A[y]));
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j;
    while(scanf("%d %d %d %d %d",&A[0],&A[1],&A[2],&A[3],&A[4])!=EOF){
        if(A[0]==0 && A[1]==0 && A[2]==0 && A[3]==0 && A[4]==0){
            break;
        }
        int flag=0;
        sort(A,A+5);
        do{
             //printf("sads\n");
            if(check(1,A[0])){
                flag=1;
                break;
            }
            else{
               // printf("return hoise\n");
            }
        }while(next_permutation(A,A+5));
        if(flag==1)printf("Possible\n");
        else{
            printf("Impossible\n");
        }
    }

}
