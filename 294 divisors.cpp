#include<bits/stdc++.h>

using namespace std;

long long a,flag,n,i,j,cases,l,d,res,b,pre,k;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    scanf("%lld",&cases);
    while(cases--){
         res=0;
         pre=0;
         flag=0;
         k=0;
         b=0;
        scanf("%lld %lld",&l,&d);
        for(i=l;i<=d;i++){
                res=2;
                long long sqrtn=sqrt(i);
            for(j=2;j<=sqrtn;j++){
                if(i%j==0){
                    if(j==sqrt(i)){
                        res=res+1;
                    }
                    else{
                    res=res + 2;
                    //printf("%lld\n",res);
                    }
                }
            }
            if(res>pre || flag==0 ){
                pre=res;
                b=i;
                //printf("%lld\n",b);
                flag=1;
            }
        }
        if(l==1 && d==1){
            printf("Between 1 and 1, 1 has a maximum of 1 divisors.\n");
        }
        else{
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,d,b,pre);
        }
    }
}

