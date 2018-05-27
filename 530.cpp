#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long flag,n,r,i,j,res,vag,a,b,rem,c,k,z;
long long q[10009],v[10009];
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
            z=0;
            k=0;
            for(i=1;i<=10000;i++){
                q[i]=0;
                v[i]=0;
            }
        if((n-r)>=r){
                for(i=((n-r)+1);i<=n;i++){
                    k++;
                    q[k]=i;
                }
                for(i=1;i<=r;i++){
                    z++;
                    v[z]=i;
                }
                //printf("duk");
            for(j=1;j<=z;j++){
                for(i=1;i<=k;i++){
                    //printf("%lld %lld\n",q[i],j);
                    gcd(q[i],v[j]);
                    //printf("%lld\n",k);
                    //printf("%lld %lld\n",q[i],j);
                    //break;
                }
                //printf("kire\n");
            }
            for(i=1;i<=k;i++){
                //printf("ekhon result %lld\n",q[i]);
                res=res*q[i];
            }
            printf("%lld\n",res);
        }
        else if((n-r)<r){
                for(i=r+1;i<=n;i++){
                    k++;
                    q[k]=i;
                }
                for(i=1;i<=(n-r);i++){
                    z++;
                    v[z]=i;
                }
                //printf("duk");
            for(j=1;j<=z;j++){
                for(i=1;i<=k;i++){
                    gcd(q[i],v[j]);
                    //printf("%lld\n",k);
                    //printf("%lld %lld\n",i,j);
                    //break;
                }
                //printf("kire\n");
            }
            for(i=1;i<=k;i++){
                //printf("ekhon result %lld\n",q[i]);
                res=res*q[i];
            }
            printf("%lld\n",res);
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
