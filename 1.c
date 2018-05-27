# include<stdio.h>
int main(){
    int i,a,b;
    scanf("%d",&i);
    while(i--){
        scanf("%d %d",&a,&b);
        if(a<b){
            printf("<\n");
        }
        if(a>b){
            printf(">\n");
        }
        if(a==b){
            printf("=\n");
        }
    }
}
