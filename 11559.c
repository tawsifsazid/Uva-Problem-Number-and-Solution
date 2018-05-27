#include<stdio.h>
#include<string.h>
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
   int a,b,c,d,part,budget,hotel,week,per,hotelcost,bed,ans;
   while(scanf("%d %d %d %d",&part,&budget,&hotel,&week)!=EOF){
        d=0;
        while(hotel--){
                a=week;
                scanf("%d",&hotelcost);
                ans=part*hotelcost;
            while(a--){
                scanf("%d",&bed);
                if(bed>=part){
                    //ans=part*hotelcost;
                    if(ans<=budget){
                        if(ans<d || d==0){
                            d=ans;

                        }
                    }
                    else{

                    }
                }
            }
        }
                    if(d!=0){
                        printf("%d\n",d);
                    }
                    else{
                        printf("stay home\n");
                    }
   }
}
