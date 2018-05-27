#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007

int ct=0,cases,kom =0;
int light[180005],n;

using namespace std;

///dir array for Queen int dxq[10] = {-1,-1,-1,1,1,1,0,0};
///dir array for Queen int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};
/*int leap(int year){
   	if( year%4 == 0 && year%100 == !0 )
            return 1;
	else if (year%100 == 0 && year%400 == 0)
            return 1;
	else
        return 0;
}*/
int func(){
     int i,j,k,fl = 0;
     for (i=kom;i<=18000;i++){
        k = 0;
        for(j=0;j<n;j++){
            if(( i % (light[j]*2) < (light[j] - 5) ) ){
              k++;
            }
        }
        if(k == n){
            fl = 1;
            break;
        }
     }
     if(fl == 0)return 0;

     else return i;

}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,b,c;



    while(scanf("%d",&light[0])!=EOF){
        int i,j,k=1;
        kom = 0;
        n = 0;
        if(light[0] == 0){
            break;
        }
        else{
                kom = max(light[0],kom);
            while(scanf("%d",&light[k])){
                if(light[k] == 0)break;
                kom = min(light[k],kom);
                k++;

            }
        }
        n = k;
        int res = func();
        //cout<<res<<endl;
        if(res == 0)printf("Signals fail to synchronise in 5 hours\n");
      else{
        int hh,mm,sec;
        hh = res / 3600;
        mm = (res - (hh*3600))/60;
        sec = res  - (hh*3600) - (mm*60);

        printf("0%d:",hh);
        if(mm < 10){
            printf("0%d:",mm);
        }
        else         printf("%d:",mm);
        if(sec < 10){
                    printf("0%d",sec);
        }
        else         printf("%d",sec);

        printf("\n");
      }
    }
    scanf("%d %d",&light[1],&light[2]);

}
