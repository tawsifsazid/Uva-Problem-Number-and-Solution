#include<bits/stdc++.h>
#define ll long long

using namespace std;

int cases,ct= 0;


int main(){
               //int y = n*2
    int i,j,k,n,s;
    while(scanf("%d %d",&n,&s)!=EOF){
        int L[100005],R[100005],A[100005];

        if(n == 0 && s == 0)break;
        for(i=0;i<=n;i++){
            L[i] = i - 1;
            R[i] = i + 1;
        }
        int l,r;
        for(i=0;i<s;i++){
            scanf("%d %d",&l,&r);
            if(L[l] != -1 && L[l] > 0){
                printf("%d ",L[l]);
            }
            else{
                printf("* ");
            }
            if(R[r] != -1 && R[r] < n + 1){
                printf("%d\n",R[r]);
            }
            else{
                printf("*\n");
            }
            R[L[l]] = R[r];
            L[R[r]] = L[l];
        }
        printf("-\n");

    }

}


