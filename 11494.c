#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,x1,x2,y1,y2,a,b,c,res;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)!=EOF){
        c=1;
        if(x1==0 && x2==0 && y1==0 && y2==0){
            break;
        }
        if(x1>x2){
            a=x1;
            x1=x2;
            x2=a;
        }
        if(y1>y2){
            b=y1;
            y1=y2;
            y2=b;
        }
        if((x2-x1)==(y2-y1)){
           if(x1==x2 && y1==y2){
            printf("0\n");
           }
           else{
            printf("1\n");
           }
        }
        else if(y1==y2 || x1==x2){
            printf("1\n");
        }
        else{
        printf("2\n");
        }
    }
}


