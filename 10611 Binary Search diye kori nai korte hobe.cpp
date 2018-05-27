#include<bits/stdc++.h>

using namespace std;

long long res,ct,cases,n;
long long A[60000];


int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&n);
    long long i,j;
    for(i=1;i<=n;i++){
        scanf("%d",&A[i]);
    }
    long long q,a;
    scanf("%lld",&q);

    while(q--){
        scanf("%lld",&a);
        long long ans1 = 3147483648, ans2 = 0;
        for(i=1;i<=n;i++){
            if(a < A[i]){
                ans1 = min(ans1,A[i]);
            }
            if(a > A[i]){
                ans2 = max(A[i],ans2);
            }
        }
        if(ans1 == 3147483648 && ans2 != 0){
            printf("%lld X\n",ans2);
        }
        else if(ans1 != 0 && ans2 == 0){
            printf("X %lld\n",ans1);
        }
        else if(ans1 == 3147483648 && ans2 == 0){
            printf("X X\n");
        }
        else{
            printf("%lld %lld\n",ans2,ans1);
        }
    }
}
