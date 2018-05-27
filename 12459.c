#include<stdio.h>
    long long array[2000000];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long n,a,b,c,d,i;
    while(scanf("%lld",&n)!=EOF){
        if(n==0){
            break;
        }
        array[1]=1;
        array[2]=2;
        array[3]=3;
        array[4]=5;
           for(i=5;i<=n;i++){
            array[i]=array[i-1]+array[i-2];
           }
           printf("%lld\n",array[n]);
    }

}

