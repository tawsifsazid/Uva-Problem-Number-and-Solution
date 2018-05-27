#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long flag,n,r,i,j,res,vag,a,b,rem,c,k;
long long q[1006],v[1006];
long long gcd(long long a,long long b);
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lld %lld",&n,&r)!=EOF){
            if(n==0 && r==0)break;
            flag=1;
            res=1;
            i=0;
            j=0;
            for(i=1;i<=1000;i++){
                q[i]=0;
                v[i]=0;
            }
        if((n-r)>=r){
                for(i=((n-r)+1);i<=n;i++){
                    q[i]=i;
                }
                for(i=1;i<=r;i++){
                    v[i]=i;
                }
                //printf("duk");
            for(j=1;j<=r;j++){
                for(i=((n-r)+1);i<=n;i++){
                    //printf("%lld %lld\n",q[i],j);
                    gcd(q[i],v[j]);
                    //printf("%lld\n",k);
                    //printf("%lld %lld\n",q[i],j);
                    //break;
                }
                //printf("kire\n");
            }
            for(i=((n-r)+1);i<=n;i++){
                //printf("ekhon result %lld\n",q[i]);
                res=res*q[i];
            }
            printf("%lld things taken %lld at a time is %lld exactly.\n",n,r,res);
        }
        else if((n-r)<r){
                for(i=r+1;i<=n;i++){
                    q[i]=i;
                }
                for(i=1;i<=(n-r);i++){
                    v[i]=i;
                }
                //printf("duk");
            for(j=1;j<=(n-r);j++){
                for(i=r+1;i<=n;i++){
                    gcd(q[i],v[j]);
                    //printf("%lld\n",k);
                    //printf("%lld %lld\n",i,j);
                    //break;
                }
                //printf("kire\n");
            }
            for(i=r+1;i<=n;i++){
                //printf("ekhon result %lld\n",q[i]);
                res=res*q[i];
            }
            printf("%lld things taken %lld at a time is %lld exactly.\n",n,r,res);
        }

    }
}
long long gcd(long long a,long long b){
    //printf("%lld %lld\n",a,b);
    if(b>a){
        a^=b;b^=a;a^=b;
        //printf("%lld %lld\n",a,b);
    }
    while(b!=0){
        rem=a%b;
        c=a;
        a=b;
        b=rem;
        //printf("%lld %lld\n",b,a);
    }
    vag=a;
    //printf("%lld %lld\n", vag);
    if(vag!=1){
     while(vag!=1){
       q[i]=q[i]/vag;
        v[j]=v[j]/vag;
        vag=1;
        //printf("%lld %lld\n",q[i],v[j]);
     }
    }
    return 0;
        //printf("%lld\n",i);

}
