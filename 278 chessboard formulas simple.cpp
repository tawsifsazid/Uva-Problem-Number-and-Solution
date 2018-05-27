#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
using namespace std;

int ct=0,cases;
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
    cin>>cases;
    while(cases--){
        char ch;
        int x,y,i,j,k;
        cin>>ch>>x>>y;
        if(ch == 'r'){
            printf("%d\n",min(x,y));
        }
        else if(ch == 'k'){
            printf("%d\n",max(((x*y)/2),(x*y)-((x*y)/2)));
        }
        else if(ch == 'K'){
            printf("%d\n",((x+1)/2)*((y+1)/2));
        }
        else{
            printf("%d\n",min(x,y));
        }
    }

}
