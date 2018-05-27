#include<bits/stdc++.h>
#define N 1005
#define ll long long
using namespace std;

int res,ct=0,cases,n,a,q;
int A[N];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
          ct++;
        if(n==0)break;
        int i,j,k;
        for(i=0;i<n;i++){
            scanf("%d",&A[i]);
        }
        sort(A , A + n);
        scanf("%d",&a);
        printf("Case %d:\n",ct);
        for(i=1;i<=a;i++){
            scanf("%d",&q);
            int temp = 0,ans = 0,diff = 999999999;
            for(j=0;j<n;j++){
                temp = A[j];
                for(k=j+1; k < n ; k++){
                   if( abs(q - (temp + A[k])) < diff){
                        ans = temp + A[k];
                        diff = abs(q - (temp + A[k]));
                   }
                }
            }
            printf("Closest sum to %d is %d.\n",q,ans);
        }
    }
}
