#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases,n;
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
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int cow,car,op;
    while(scanf("%d %d %d",&cow,&car,&op)!=EOF){
        double res=0.0;

        int vag = cow + car;
        res = (((double)(cow)/(double)vag)*((double)(car)/(double)(vag-op-1)))+ (((double)(car)/(double)(vag))*((double)((car-1)/(double)(vag-op-1))));

        //printf("%lf\n",res);
        printf("%.5lf\n",res);
    }
}
