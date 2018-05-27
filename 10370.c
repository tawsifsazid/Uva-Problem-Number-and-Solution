#include<stdio.h>
int array[1000000];


int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    double ans1,ans,ans2,k,a,b,j;
    int n,i;

        scanf("%d",&n);
        while(n--){
             i=0;
            ans=0;
            j=0;
            scanf("%lf",&a);
            k=a;
            for(i=0;i<a;i++){
                scanf("%lf",&b);
                array[i]=b;
            }
            for(i=0;i<k;i++){
                ans=ans + array[i];
            }
            ans1=ans/k;
            for(i=0;i<k;i++){
                if(array[i]>ans1){
                    j++;
                }
                else{

                }
            }
            ans2=(j/k)*100.0;
            printf("%.3lf%%\n",ans2);
        }

}
