#include<stdio.h>
#include<string.h>
#include<math.h>
int i,cases,n,b,j,m,res,g;
int array[20010];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    scanf("%d",&cases);
    while(cases--){
             for(i=1;i<=20000;i++){
            array[i]=0;
            //printf("%d",array[i]);
            }
            res=0;
            g=0;
        //printf("%d",cases);
        scanf("%d",&n);
        //printf("%d\n",n);
        for(i=1;i<=n;i++){
            //printf("%d\n",i);
            scanf("%d",&b);
            array[b]++;
            //printf("%d\n",array[b]);
        }

        for(i=20000;g<=n && i>=1;i--){
               // printf("%d\n",array[i]);
            for(j=1;j<=array[i];j++){
                g++;
                //printf("%d\n",i);
                if(g%3==0){
                res=res + i;
                //printf("%d\n",res);
                }
            }
        }
        printf("%d\n",res);
    }
}
