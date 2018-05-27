#include<stdio.h>

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a,b,rem1,rem2,j,i,c;
    int array[1000];
    j=1;
         for(i=99;i>0;i--){
            array[i]=j;
            j++;
         }
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a==-1 && b==-1){
            break;
        }
        if(a>b){
            c=a;
            a=b;
            b=c;
        }
            rem1=b-a;
            rem2=a+array[b];

        if(rem1>rem2){
            printf("%d\n",rem2);
        }
        else{
            printf("%d\n",rem1);
        }
    }

}

