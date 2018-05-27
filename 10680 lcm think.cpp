#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
using namespace std;

int ct=0,cases,n;
char flag[1000005];
vector<ll>P;
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
void sieve(){
    P.push_back(2);
    ll i,j,k;
    memset(flag,0,sizeof flag);
    for(i=3;i<=1000000;i=i+2){
        if(flag[i]== 0){
            P.push_back(i);
            //cout<<i<<endl;
        }
        if(flag[i]==0){
            for(j=i*i;j<=1000000;j=j+i){
                flag[j]=1;
            }
        }
    }
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    sieve();
    while(scanf("%d",&n)!=EOF){
        ll i,j,k,res= 1;
        if(n == 0){
            break;
        }
        int two = 0,five = 0;
        for(i = 2 ;i <= n ;i =  i*2){
            two++;

        }

        for(j = 5 ; j <= n ;j = j*5){
            five++;
        }
        //cout<<two<<" "<<five<<endl;
        for(i=1;i<=two-five;i++){
                res = (res * 2)%10;
            //    cout<<res<<endl;
        }
        for(i=0;i<P.size();i++){
                //cout<<P[i]<<endl;
            if(P[i] > n)break;
           if(P[i] != 2 && P[i]!=5){
                for(j=P[i];j<=n;j=j*P[i]){
                    //printf("aa\n");
                    //cout<<"gun "<<j<<endl;
                    //res= res * j;
                    //cout<<"k "<<res<<endl;
                    res = (res * P[i])%10;
                    //cout<<res<<endl;
                }
           }
        }
        printf("%d\n",res);

    }


}
