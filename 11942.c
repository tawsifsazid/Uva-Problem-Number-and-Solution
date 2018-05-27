 #include<stdio.h>
#include<string.h>
int array[2000000];
int main(){
    int a,b,c,d,n,i,j,l,k,ans;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
            printf("Lumberjacks:\n");
       while(n--){
            c=0;
            l=0;
            j=0;
            for(i=0;i<10;i++){
                scanf("%d",&a);
                array[i]=a;

       }
        for(i=0;i<10;i++){
            for(j=i+1;j<10;j++){
            if(array[i]<array[j]){
                c=1;
            }
            else if(array[i]>array[j]){
                l=1;
            }
        }
    }
        if(c==1 && l==1){
            printf("Unordered\n");
        }
        else{
            printf("Ordered\n");
        }
       }
    }
}
