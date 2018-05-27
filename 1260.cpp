#include<bits/stdc++.h>
#define N 1005
#define ll long long
using namespace std;

int res,ct,cases,n,sum;
int A[N],B[N];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j,k;
    scanf("%d",&cases);
    while(cases--){
        scanf("%d",&n);
        memset(B,0,sizeof B);
        memset(A,0,sizeof A);
        for(i=1;i<=n;i++){
            scanf("%d",&A[i]);
        }
        sum = 0;
        int pos = 0;
        for(i=2;i<=n;i++){
            int paisi = 0;
            pos++;
            for(j=i-1;j>=1;j--){
                if(A[j] <= A[i]){
                    paisi ++;
                    B[pos] = paisi;
                }
            }
            //printf("%d = %d\n",A[i],B[pos]);
        }
        for(i=1;i<=n-1;i++){
            sum = sum  + B[i];
        }
        printf("%d\n",sum);
    }

}
