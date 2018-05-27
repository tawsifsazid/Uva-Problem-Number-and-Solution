#include<stdio.h>
#include<string.h>
#include<math.h>
int array[2000000];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a,b,c,d,i,j,k,res;
        printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&a)!=EOF){
        k=0;
        res=0;
        if(a==0){
            printf("END OF OUTPUT\n");
            break;
        }
        for(i=1;i<a;i++){
            if(a%i==0){
                array[k]=i;
                k++;
            }
        }
        for(i=0;i<k;i++){
            res=res + array[i];
        }
        if(res==a){
            printf("%5d  PERFECT\n",a);
        }
        if(res<a){
            printf("%5d  DEFICIENT\n",a);
        }
        if(res>a){
            printf("%5d  ABUNDANT\n",a);
        }
    }
}
