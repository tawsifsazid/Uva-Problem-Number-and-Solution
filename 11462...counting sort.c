#include<stdio.h>
int array[2000006];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int i,j,n,a,c;
    while(scanf("%d",&n)!=EOF){
        c=0;
        if(n==0){
            break;
        }
        for(i=0;i<2000006;i++){
            array[i]=0;
        }
        for(i=0;i<n;i++){
            scanf("%d",&a);
            array[a]++;
        }
        for(i=0;i<2000006;i++){
            for(j=0;j<array[i];j++){
                if(c==1){
                    printf(" %d",i);
                    c=1;
                }
                if(c==0){
                    printf("%d",i);
                    c=1;
               }
            }
        }
        printf("\n");
    }
}
