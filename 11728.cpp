#include<bits/stdc++.h>

using namespace std;
/// SOD==SOD(N)=(p01+p11+p21...pa11)×(p02+p12+p22...pa22)×...(p0k+p1k+p2k...pakk);
///SOD(12)=(2^0+2^1+2^2)×(3^0+3^1);
int A[100000008],s,n,ct=0,k=1,flag[10000008];
void sieve(){
    int i;
    flag[1]=-1;
    A[k]=2;
    for(i=3;i<=1000006;i=i+2){
        flag[i]=0;
    }
    for(i=3;i<=10000;i=i+2){
        if(flag[i]==0){
            k++;
            A[k]=i;
            //printf("%d\n",A[k]);
        }
        if(flag[i]==0){
            //long long sqrtn=sqrt(n);
            for(int j=i*i;j<=10000;j=j+i){
                flag[j]=-1;
            }
        }
    }
}
int SOD(int x){
    int sqrtn=sqrt(x),i,j,tempsum,sum=1,p;
    for(i=1;A[i]<=sqrtn && i<=k ;i++){
        if(x % A[i] == 0){
            tempsum=1;
            p=1;
            //printf("%d vag korlo\n",A[i]);
            while(x % A[i] == 0){
                x=x/A[i];
                p=p*A[i];
                tempsum = tempsum + p;
            }
            sqrtn=sqrt(x);
            sum=sum*tempsum;
        }
    }
    if(x!=1){
        //printf("dhukse\n");
        sum=sum * (x + 1);
    }
    //printf("%d %d\n",x,sum);
    return sum;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    sieve();
    int i;
    while(scanf("%d",&n)!=EOF){
        ct++;
        if(n==0)break;
        int fl=0,yes;
        for(i=1;i<=10000;i++){
            if(SOD(i)==n){
                fl=1;
                 yes=i;
        //printf("yes=%d\n",yes);
                //break;
            }
        }
        if(fl==1)printf("Case %d: %d\n",ct,yes);
        else{
            printf("Case %d: -1\n",ct);
        }
    }
}
