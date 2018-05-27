#include<stdio.h>

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int wall1,i,j,a,b,c,cases,ct;
    ct=0;
    scanf("%d",&cases);
    while(cases--){
        ct++;
        i=0;
        j=0;
        scanf("%d",&a);
        scanf("%d",&wall1);
        a=a-1;
        while(a--){
            scanf("%d",&c);
            if(c>wall1){
                i++;
                wall1=c;
            }
            else if(c<wall1){
                j++;
                wall1=c;
            }
            else if(c==wall1){

            }
        }
            printf("Case %d: %d %d\n",ct,i,j);
    }
}
