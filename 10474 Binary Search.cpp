#include<bits/stdc++.h>

using namespace std;

int res,ct=0,cases,n,q,a,ans;
int A [90000];
int binarysearch(int low ,int high){
    //printf("low = %d And hifgh = %d\n",low,high);
    if(low > high ){
        return  -1;
    }
    int mid = (low + high)/2;
    if(A[mid] == a){
         ans = min(mid,ans);
    }
    if(A[mid] < a){
        low  = mid + 1;
        //printf("ekhon low = %d high = %d\n",low,high);
        binarysearch(low,high);
    }
    else {
        high = mid - 1;
         //printf("ekhon low = %d high = %d\n",low,high);
        binarysearch(low , high);
    }

}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&n,&q)!=EOF){
        if(n==0 && q==0)break;
        ct++;
        int i,j;
        memset(A , 0 ,sizeof A);
        for(i = 1; i<= n ; i++){
            scanf("%d",&A[i]);
        }
        sort(A + 1, A + (n+1));
        //for(i=1; i<=n ;i++)printf("A[i]i==%d = %d\n",i,A[i]);
        printf("CASE# %d:\n",ct);
        for(i=1 ; i<= q; i++){
            ans = 999999999;
            scanf("%d",&a);
          int fl =  binarysearch(1,n);
            if(ans == 999999999)printf("%d not found\n",a);
            else{
                printf("%d found at %d\n",a,ans);
            }
        }
    }
}
