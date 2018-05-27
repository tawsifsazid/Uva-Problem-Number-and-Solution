#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007

int  ct=0,cases;

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
int magenta[2],yellow[2],cyan[2],m,y,c;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        scanf("%d %d %d",&magenta[0],&yellow[0],&cyan[0]);
        char str[100005];
        scanf("%s",str);
        int len = strlen(str);
        int fl=0;
        for(int i=0;i<len;i++){
            if(str[i] == 'M'){
                 magenta[0]--;
            }
            else if(str[i] == 'Y'){
                yellow[0]--;
            }
            else if(str[i] == 'C'){
               cyan[0]--;
            }
            else if(str[i] == 'R'){
                yellow[0]--;
                magenta[0]--;
            }
            else if(str[i] == 'V'){
               cyan[0]--;
               magenta[0]--;
            }
            else if(str[i] == 'G'){
               yellow[0]--;
               cyan[0]--;
            }
            else if(str[i] == 'B'){
              yellow[0]--;
              cyan[0]--;
              magenta[0]--;
            }
            else{

            }

        }
        if(magenta[0]<0 || yellow[0]<0 || cyan[0]<0){
            fl = 1;
        }
        if(fl == 1){
            printf("NO\n");
        }
        else{
             printf("YES %d %d %d\n",magenta[0],yellow[0],cyan[0]);
        }
    }

}
