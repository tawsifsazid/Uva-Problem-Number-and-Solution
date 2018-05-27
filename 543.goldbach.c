#include<stdio.h>
#include<math.h>
    int array[1000000];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,i,j,v,k,a,b,x,total,g,h;
         b=1;
            x=0;
            array[0]=3;
            for(i=2;i<=1000000;i++){
                for(j=2;j<=sqrt(i);j++){
                    if(i%j!=0){
                        g=1;
                    }
                    else{
                        g=0;
                        break;
                    }
                }
                if(g==1){
                     array[b]=i;
                        b++;

                }
                total=b-1;
            }
        while(scanf("%d",&n)!=EOF){
            if(n==0){
                break;
            }
            x=0;
            for(k=0;array[k]<n;k++){
                h=array[k];
                for(a=0;array[a]<n;a++){
                        array[a];
                    if(array[k]+array[a]==n){
                        x=1;
                        break;
                    }
                }
                if(x==1){
                    break;
                }
            }
            if(x==1){
                printf("%d = %d + %d\n",n,h,array[a]);
            }

        }
}
