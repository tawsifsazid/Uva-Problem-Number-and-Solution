#include<stdio.h>

long long array[1000000];
 long long func(){
        long long i;
        array[1]=1;
        array[2]=2;
        array[3]=3;
        array[4]=5;
        for(i=5;i<=50;i++){
            array[i]=array[i-1]+array[i-2];
        }
 }
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long ans,n,i,j,a,c,diff;
            func();
        while(scanf("%lld",&n)!=EOF){
            if(n==0){
                break;
            }

            printf("%lld\n",array[n]);

        }


}
