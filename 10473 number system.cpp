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
    char str[10005];
    int fl  = 0;
    while(scanf("%s",str)){
        if(str[0] == '-')break;
        int i,j,k;
         char res[10005],tmp[10005];
        ll power = 1,ans = 0,a =0;
        if(str[0] == '0' && str[1] == 'x'){

            for(i = strlen(str)-1 ;i >=2 ;i--){
                if(str[i]>= 'A' && str[i]<='Z'){
                    ans = ans + ((str[i]-55)*power);
                }

                else    ans = ans + ((str[i]-48)*power);
                //cout<<ans<<endl;
                power = power*16;
            }
            printf("%lld\n",ans);
        }
        else{
                //printf("ss\n");

                j = 0;

            a = atoi(str);
           if(a == 0)printf("0x0\n");
           else{
               while(a!=0){
                    ll rem = a % 16;
                    a = a/16;
                    if(rem > 9){
                        if(rem == 10)res[j] = 'A';
                        if(rem == 11)res[j] = 'B';
                        if(rem == 12)res[j] = 'C';
                        if(rem == 13)res[j] = 'D';
                        if(rem == 14)res[j] = 'E';
                        if(rem == 15)res[j] = 'F';
                    }
                    else{

                            res[j] = rem + 48;
                        //cout<<res[j]<<endl;
                    }
                   j++;

               }


                printf("0x");
                for(i=j-1;i>=0;i--){
                    printf("%c",res[i]);
                }
                printf("\n");
            }
        }
    }

}
