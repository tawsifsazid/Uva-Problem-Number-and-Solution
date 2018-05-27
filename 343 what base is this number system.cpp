#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
using namespace std;

ll ct=0,cases;
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
     char x[105],y[105];
    ll n1,n2,fl,i1,j1,len1,len2,a1,a2,i,j;
    while(scanf("%s %s",x,y)!=EOF){
        fl = 0;
        int ch = 1;
        for(i=2;i<=36;i++){
            for(j=2;j<=36;j++){
                 ll ans1=0,f1=i,power = 0,ch = 1;
             for(i1=strlen(x) - 1 ;i1>= 0;i1--){
                if(x[i1] >= 'A' && x[i1] <= 'Z'){

                    ans1 = ans1 + ((x[i1] - 55)*pow(f1,power));
                    if(x[i1] - 55 >= i)ch = 0;
                }
                else{
                    ans1 = ans1 + ((x[i1] - 48)*pow(f1,power));
                    if(x[i1] - 48 >= i)ch = 0;
                }
                power++;

                //cout<<ans1<<" a1"<<endl;
                //break;
             }
                ll ans2=0,f2=j;
                power = 0;
                for(j1=strlen(y) - 1 ;j1>= 0;j1--){
                    if(y[j1] >= 'A' && y[j1] <= 'Z'){
                            ans2 = ans2 + ((y[j1] - 55)*pow(f2,power));
                            if(y[j1] - 55 >= j)ch = 0;
                    }
                    else{
                            ans2 = ans2 + ((y[j1] - 48)*pow(f2,power));
                            if(y[j1] - 48 >= j) ch  = 0;
                    }
                    power++;

                     //cout<<ans2<<" a2"<<endl;
                    //break;
                }
                if(ch == 0)continue;
                if(ans1 == ans2 ){
                    a1 = i;
                    a2 = j;
                    fl = 1;
                    break;
                }
            }
            if(fl == 1)break;


        }

        if(fl == 1){
            printf("%s (base %llu) = %s (base %llu)\n",x,a1,y,a2);
        }
        else{
            printf("%s is not equal to %s in any base 2..36\n",x,y);
        }

    }

}
