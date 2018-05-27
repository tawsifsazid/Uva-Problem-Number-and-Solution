#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int j,n,a,A[50000],B[50000],flag,i,k;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
            flag=0;
            j=-1;
          if(n==1 || n==2){
                for(i=1;i<=n;i++)scanf("%d",&k);
                printf("Jolly\n");
          }
          else{
            for(i=1;i<=n;i++){
                scanf("%d",&A[i]);
            }
            for(i=2;i<=n;i++){
                j++;
                B[j]=abs(A[i]-A[i-1]);
                //printf("B[%d] ==%d\n",j,B[j]);
            }
            int sizee=n-1;
            sort(B ,B + sizee);
            //for(j=0;j<n-1;j++)printf("sort %d\n",B[j]);
            i=0;
            for(j=n-2;j>=0;j--){
                //printf("%d %d\n",B[i-1],B[i]-1);
                i++;
                if(B[j]==(n-i)){
                    flag=1;
                }
                else{
                    flag=0;
                    break;
                }
            }
            if(flag==0){
                printf("Not jolly\n");
            }
            else{
                printf("Jolly\n");

            }
          }
    }
}
