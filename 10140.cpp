#include<bits/stdc++.h>

using namespace std;
long long v,i,j,n,k=1,flag[10000006],A[60000],sqrtn=50000,range[1000006];

void sieve(){
    A[k]=2;
    memset(flag,0,sizeof flag);
    for(i=3;i<=sqrtn;i=i+2){
        if(flag[i]==0){
            k++;
            A[k]=i;
            //printf("%lld\n",A[k]);
        }
        if(flag[i]==0){
            for(j=i*i;j<=sqrtn;j=j+i){
                flag[j]=-1;
            }
        }
    }
}
void segmentedsieve(long long a,long long b){
    //printf("%lld %lld\n",a,b);
    memset(range, 0 ,sizeof range);
    if(a==1) a++;
    sqrtn=sqrt(b);
    for(i=1; i <= k && A[i]<= sqrtn; i++){
        long long p = A[i];
        j= p*p;
        if(j<a)j = (((a + p -1)/p)*p);
        //printf("j== %lld %lld\n",j,A[i]);
        for( ; j<=b ; j = j + p){
            range[j-a]=-1;
            //printf("%lld\n",j);
        }
    }
    v=0;
    memset(flag,0,sizeof flag);
    for(i=a;i<=b;i++){
        if(range[i-a]==0){
            //printf("%lld\n",i);
            v++;
            flag[v]=i;
            //printf("haf %lld\n",i);
        }
    }
}
int main(){
    sieve();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF){
       long long diff=-1,diff1=-1,fl=0,c1,c2,d1,d2;
       segmentedsieve(a,b);
       for(i=2;i<=v;i++){
            fl=1;
           // printf("%lld %lld checking \n",flag[i],flag[i-1]);
            if(diff > (flag[i]-flag[i-1]) || diff==-1){
                diff=flag[i]-flag[i-1];
                c2=flag[i];
                c1=flag[i-1];
            }
            if(diff1 < (flag[i] - flag[i-1]) || diff1==-1){
                diff1=(flag[i] - flag[i-1]);
                d2=flag[i];
                d1=flag[i-1];
            }
       }
       if(fl==0)printf("There are no adjacent primes.\n");
       else{
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",c1,c2,d1,d2);
       }
    }
}
