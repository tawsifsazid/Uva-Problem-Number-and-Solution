#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int i,j,a,b,c,d,cases,ct=0,a1,b1,c1,d1;
char ch1,ch2,ch3,ch4;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        ct++;
        scanf("%d %c %d %d %c %d",&a,&ch1,&b,&a1,&ch2,&b1);
        scanf("%d %c %d %d %c %d",&c,&ch3,&d,&c1,&ch4,&d1);
        //printf("%d %d %d %d",a,b,c,d);
        a=(a*60)+b;
        a1=(a1*60)+b1;
        c=(c*60)+d;
        c1=(c1*60)+d1;
        if((a>=c && a<=c1)||(c>=a && c<=a1)){
            printf("Case %d: Mrs Meeting\n",ct);
        }
        else{
            printf("Case %d: Hits Meeting\n",ct);
        }
    }
}
