#include<stdio.h>
long long array[90000000];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long v,c,a,i,j,k;
    i=1;
    array[1]=1;
    for(a=2;a<900000000;a++){
        c=1;
        v=a;
        while(v%2==0 || v%3==0 || v%5==0){
                c=1;
                //printf("%d\n",v);
          if(v%3==0){
            v=v/3;
            c=0;
          }
          else if(v%2==0){
            v=v/2;
            c=0;
          }
          else if(v%5==0){
            v=v/5;
            c=0;
          }
        if(v>1){
            c=1;
        }
    }
        if(c!=1){
            i++;
            printf("%lld\n",i);
            array[i]=a;
        printf("%lld\n",array[1500]);
        }
    }
    //printf("%lld\n",array[1500]);
}
