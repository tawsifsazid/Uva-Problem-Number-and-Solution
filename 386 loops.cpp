#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
using namespace std;

ll ct=0,cases,n;
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
    ll i,j,k,l,a,b,c,d;
    for(i=2;i<=200;i++){
        a = i*i*i;
        for(j=2;j*j*j<=a;j++){
            b = j*j*j;
            for(k=j+1;k*k*k<=a;k++){
                c = k*k*k;
                for(l=k+1;l*l*l<=a;l++){
                    d = l*l*l;
                    if(b!=c && b!= d  && c!=d && a ==(b+c+d)){
                        printf("Cube = %lld, Triple = (%lld,%lld,%lld)\n",i,j,k,l);
                    }
                }
            }
        }
    }

}
