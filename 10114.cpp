#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
using namespace std;

int i,month,res,dep,j,konmnth,k;
double charge,cartaka,owes,percen,past;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %lf %lf %d",&month,&charge,&cartaka,&dep)!=EOF){
        if(month<0)break;
        j=0;
        res=0;
        past=0;
        owes=0;
        int flag=0;
        double c=charge;
        charge=cartaka/(double)month;
        owes=cartaka;
        cartaka=cartaka+c;
        //printf("mote cartaka=%lf owes=%lf\n",cartaka,owes);
        for(i=0;i<dep;i++){
            scanf("%d %lf",&konmnth,&percen);
            if(konmnth==0){
                past=percen;
                j=konmnth;
                cartaka=cartaka-(cartaka*percen);
                  //printf("ekhon 2222 cartaka %lf owes %lf month %d\n",cartaka,owes,res);
                if(owes<cartaka && flag==0){
                    flag=1;
                    printf("0 months\n");

                }
                //printf("ekhon 0000 cartaka %lf owes %lf month %d\n",cartaka,owes,res);
            }
            else{
               if(konmnth-j==1){
                     res++;
                     cartaka=cartaka-(cartaka*percen);
                    owes=owes-charge;
                     // printf("ekhon 2222 cartaka %lf owes %lf month %d\n",cartaka,owes,res);
                    if(owes<cartaka && flag==0){
                        if(res==1){
                            flag=1;
                            printf("%d month\n",res);
                            break;
                        }
                        else{
                            flag=1;
                            printf("%d months\n",res);
                        }
                    }
                    past=percen;
                    j=konmnth;
                //printf("ekhon cartaka %lf owes %lf month %d\n",cartaka,owes,res);
               }
               else{
                j=j+1;
                //printf("j holo %d rrrr past holo %lf\n",j,past);
                for(k=j;k<=konmnth;k++){
                    res++;
                    if(k==konmnth)past=percen;
                    cartaka=cartaka-(cartaka*past);
                    owes=owes-charge;
                      //printf("ekhon 2222 cartaka %lf owes %lf month %d\n",cartaka,owes,res);
                    if(owes<cartaka && flag==0){
                       //printf("EIKHANE DHUKSE\n");
                       if(res==1){
                            //printf("eikhane dhukse");
                            printf("%d month\n",res);
                            flag=1;
                       }
                        else{
                            flag=1;
                            printf("%d months\n",res);
                        }
                    }
                }
                j=konmnth;
               }
            }
        }
        if(flag==0){
                j=j+1;
                //printf("eikhane dhukse past=%lf\n j=%d\n",past,j);
            for(i=j;i<=month;i++){
                    res++;
                    cartaka=cartaka-(cartaka*past);
                    owes=owes-charge;
                    if(owes<cartaka){
                       if(res==1){
                            //printf("eikhane dhukse");
                            printf("%d month\n",res);
                            break;
                       }
                        else{
                            printf("%d months\n",res);
                            break;
                        }
                    }
            }
        }
    }
}
