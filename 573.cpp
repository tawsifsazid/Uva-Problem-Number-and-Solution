#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

double h,u,d,f,climbed;
int day,i,j;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%lf %lf %lf %lf",&h,&u,&d,&f)!=EOF){
        if(h==0)break;
        int flag=0;
        double fatigue=u*(f/100);
        //printf("fatigue %lf\n",fatigue);
        day=1;
        i=0;
        climbed=u;
        if(climbed>h)printf("success on day 1\n");
        else{
            climbed=climbed-d;
            if(climbed<0)printf("failure on day 1\n");
           else{
           while(1){
                 i++;
                 day++;
                 //printf("ekhon day %d\n",day);
                if((u-(fatigue*i))<0){
                        flag=1;
                }
                if(flag!=1){
                    climbed=climbed + (u-(fatigue*i));
                }
                //printf("sokale %lf aager dnn theke kom %lf\n",climbed,(u-(fatigue*i)));
                if(climbed<0)break;
                if(climbed>h)break;
                climbed=climbed-d;
                if(climbed<0)break;
                //printf("raate neme hoise %lf\n",climbed);
           }
           if(climbed<0)printf("failure on day %d\n",day);
           if(climbed>0)printf("success on day %d\n",day);
           }
        }
    }
}
