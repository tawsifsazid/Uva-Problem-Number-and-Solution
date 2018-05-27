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

int flag1=0,i,j,k=0,res,ct,cases,n,t,A[14],flag[14],sum,arekta,B[5000][15],tot[5000],aki[5000];
void sumup(int i,int sum){
    //printf("i==%d A[i]=%d %d\n",i,A[i],sum);
        if(i==n+1){
          if(sum==t){
                j=0;
                k++;
              //if(arekta==0)printf("Sums of %d:\n",t);
              arekta++;
                for(i=1;i<=n;i++){
                    if(flag[i]!=0){
                        B[k][j]=A[i];
                        j++;
                    }
                }
                tot[k]=j;
          }
           return;
        }
                flag[i]=1;
                sumup(i+1,sum+A[i]);
                flag[i]=0;
                sumup(i+1,sum);
            //sumup(i+1,sum+A[i]);
            //flag[i]=0;
            //sumup(i+1,sum);
}
bool check(int i,int j){
    for(int h=0;h<tot[i];h++){
        if(B[i][h]!=B[j][h]){
            return false;
        }
    }
    return true;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&t,&n)!=EOF){
        if(t==0 && n==0)break;
        k=0;
        //scanf("%d",&t);
        for(i=1;i<=n;i++){
            scanf("%d",&A[i]);
        }
        arekta=0;
        sum=0;
        sumup(1,0);
        if(arekta==0){
            printf("Sums of %d:\n",t);
            printf("NONE\n");
        }
        else{
                printf("Sums of %d:\n",t);
            for(i=1;i<=k;i++){
                sort(B[i],B[i]+tot[i]);
                reverse(B[i],B[i]+tot[i]);
            }
            for(i=1;i<=k;i++){
                aki[i]=0;
            }
            for(i=1;i<=k;i++){
                for(j=i+1;j<=k;j++){
                    if(tot[i]==tot[j]){
                        if(check(i,j)){
                           aki[j]=-1;
                        }
                    }
                }
            }
            for(i=1;i<=k;i++){
                if(aki[i]==0){
                    for(j=0;j<tot[i];j++){
                        if(j==0)printf("%d",B[i][j]);
                        else{
                            printf("+%d",B[i][j]);
                        }
                    }
                    printf("\n");
                }
            }
        }
    }
}
