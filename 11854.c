#include<stdio.h>

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        if(a==0 && b==0 && c==0){
            break;
        }
        if(a>b && a>c){
            if(a*a == (b*b) + (c*c)){
                printf("right\n");
            }
            else{
                printf("wrong\n");
            }
        }
         else if(b>a && b>c){
            if(b*b == (a*a) + (c*c)){
                printf("right\n");
            }
            else{
                printf("wrong\n");
            }
        }
        else if(c>a && c>b){
            if(c*c == (b*b) + (a*a)){
                printf("right\n");
            }
            else{
                printf("wrong\n");
            }
        }
    }
}
