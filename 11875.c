#include<stdio.h>
#include<string.h>
#include<math.h>
int array[2000000];

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int cases,ct,i,j,k,a,b,c,player;
    scanf("%d",&cases);

    ct=0;
    while(cases--){
         ct++;
         i=1;
        scanf("%d",&player);
        k=player;
        while(player--){
            scanf("%d",&a);
            array[i]=a;
            i++;
        }
        for(i=1;i<=k;i++){
            for(j=i+1;j<=k;j++){
                if(array[i]>array[j]){
                    c=array[i];
                    array[i]=array[j];
                    array[j]=c;
                }
            }
        }
        printf("Case %d: %d\n",ct,array[(k+1)/2]);
    }
}
