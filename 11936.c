#include<stdio.h>

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long a,b,c,cases;
    scanf("%lld",&cases);
    while(cases--){
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a + b >c){
            printf("OK\n");
        }
        else{
            printf("Wrong!!\n");
        }
    }
}
