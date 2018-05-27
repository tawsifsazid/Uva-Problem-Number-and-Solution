#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int  met1,met,ct=0,i,j,req,prop,x,flag=0;
double taka,taka1;
char rq[4000] [4000],pr[4000],comp[4000][4000],temp[4000][4000];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&req,&prop)!=EOF){
        getchar();
        if(req==0 && prop==0)break;
        if(flag>0){
            printf("\n");
        }
        met1=0;
        ct++;
        taka1=9999999999.0;
        for(i=1;i<=req;i++){
            gets(rq[i]);
            //printf("ichhr name %s\n",rq[i]);
        }
        for(i=1;i<=prop;i++){
            gets(comp[i]);
            //printf("\n\n ekhon name %s\n\n",comp[i]);
            scanf("%lf %d",&taka,&met);
            getchar();
            if(met1<=met){

                if(met1==met){
                    if(taka<taka1){
                        //printf("dhukse\n");
                        taka1=taka;
                         x=i;
                         //printf("ans hobe %s taka %lf",comp[x],taka);
                    }
                }
                else{
                    met1=met;
                    taka1=taka;
                   // printf("milse %d\n",met1);
                     x=i;
                }
            }
            for(j=1;j<=met;j++){
                gets(temp[i]);
            }
        }
        printf("RFP #%d\n",ct);
        printf("%s\n",comp[x]);
        flag++;
    }
}
