#include<bits/stdc++.h>

using namespace std;

int i,j,n,rem,res,c;
int gcd(int a,int b){
    if(b==0)return a;
    else{
        return gcd (b,a%b);
    }
}
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
       if(n==0)break;
        rem=0;
        res=0;
        for(i=1;i<n;i++){
            for(j=i+1;j<=n;j++){
                //printf("%lld %lld\n",i,j);

                res=res + gcd(i,j);
                //printf("%lld %lld\n",i,j);

            }
        }
        printf("%d\n",res);
    }

}

