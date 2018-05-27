#include<stdio.h>
#include<string.h>
    int array[1000000];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a,b,n,cases,i,j,k,d,c,res;
    scanf("%d",&cases);
    while(cases--){
        res=0;
        i=0;
        c=0;
        scanf("%d",&b);
        n=b;
        while(b--){
            scanf("%d",&a);
            array[i]=a;
            i++;
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(array[i] <= array[j]){
                    k=array[j];
                    array[j]=array[i];
                    array[i]=k;
                }
            }
        }
        for(i=0;i<n-1;i++){
            res=res + array[i]-array[i+1];

        }
        res=res+ array[0]-array[n-1];
        printf("%d\n",res);
    }
}
