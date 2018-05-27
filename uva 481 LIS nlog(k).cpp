#include<bits/stdc++.h>
#define N 1000005
#define ll long long
#define inf 90000000000
using namespace std;

ll res,ct,cases,n,m;
ll I[N],L[N],seq[N],lisseq[N];
void print(ll length){
    ll i , j;
    i = 0;
    for(j=1 ; j<m ; j++){
        if(L[j] > L[i]){
            i = j;
        }
    }
    //printf("%lld\n",i);
    ll top = length;
    lisseq[top] = seq[i];
    top--;
    //printf("%lld = %lld\n",i,L[i]);
    for(j=i-1; j>=0; j--){
        if(seq[j] < seq[i] && L[j] == L[i] - 1){
            i = j;
            lisseq[top]  = seq[j];
            top--;
        }
    }
    printf("%lld\n",length);
    printf("-\n");
    for(i=1;i<=length;i++){
        printf("%lld\n",lisseq[i]);
    }
}
void nloglis(ll a){
    ll i,j;
    for(i=1;i<=a;i++){
        I[i] = inf ;
    }
    I[0] = -inf;
    ll low,high,med,lislength=0;
    for(i=0;i<a;i++){
        low = 0;
        high  = lislength;
        while(low<=high){
            med = (high + low)/2;
            if(I[med] < seq[i]){
                low = med + 1;
            }
            else{
                high = med - 1;
            }
        }
        I[low] = seq[i];
         L[i]  = low ;
        // printf("L[%lld] = %lld\n",i,low);
        //printf("low =  %lld and %lld\n",low,seq[i]);
        if(lislength <= low){
            lislength = low;
            //L[i]  = low ;
            //printf("L[%lld] = %lld\n",i,low);
        }
    }
    //printf("%lld\n",lislength);
    print(lislength);
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll i=0,j,k;
    while(scanf("%lld",&n)!=EOF){
        seq[i] = n;
        i++;
    }
     m = i;
    for(j=0;j<m;j++){
        L[j] = 1;
    }
    nloglis(m);
}
