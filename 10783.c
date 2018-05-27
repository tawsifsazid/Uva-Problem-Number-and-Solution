#include<stdio.h>

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int i,j,a,b,c,cases,ct,res;
    ct=0;
    scanf("%d",&cases);
    while(cases--){
        res=0;
        ct++;
        scanf("%d %d",&a,&b);
            for(i=a;i<=b;i++){
                if(i%2==1){
                    res=res+i;
                }
                else{

                }
            }
            printf("Case %d: %d\n",ct,res);
    }
}
