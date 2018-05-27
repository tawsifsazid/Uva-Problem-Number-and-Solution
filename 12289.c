#include<stdio.h>
#include<string.h>
    char array[2000000];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a,b,c,d,i;
        while(scanf("%d",&a)!=EOF){
            b=0;
            d=0;
            scanf("%s",array);
            c=strlen(array);
            if(c==3){
                for(i=0;i<c;i++){
                    if(array[i]=='n' || array[i]=='e'){
                        b=1;
                        break;
                    }
                    if(array[i]=='t' || array[i]=='w')break;
                }
                if(b==1)printf("1\n");
                else{
                    printf("2\n");
                }
            }
            else if(c==5){
                printf("3\n");
            }
        }
}
