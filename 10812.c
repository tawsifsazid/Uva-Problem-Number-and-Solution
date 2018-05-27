#include<stdio.h>

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a,b,c,d,cases;
    scanf("%d",&cases);
    while(cases--){
        scanf("%d %d",&a,&b);
        if(a<b){
            printf("impossible\n");
        }
        else if(a>=b){
            c=(a+b);
            d=(a-b);
            if(c%2==1 || d%2==1){
                printf("impossible\n");
            }
            else{
              c=c/2;
              d=d/2;
            printf("%d %d\n",c,d);
            }
        }
    }
}
