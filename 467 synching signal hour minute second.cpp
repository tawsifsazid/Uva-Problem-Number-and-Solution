#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007

int ct=0,cases,kom =0;
int light[3605],n;

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
     for (i=kom;i<=3600;i++){
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
    string aa;


    while(getline(cin,aa)){
        ct++;
        istringstream Z(aa);
        memset(light,0,sizeof light);
        int i,j,k=0;
        kom = 0;
        n = 0;
        kom = max(200000,kom);
        while(Z >> a){
            light[k] = a;
            kom = min(light[k],kom);
            k++;
        }

        n = k;
        //cout<<n<<endl;
        int res = func();
        //cout<<res<<endl;
        if(res == 0)printf("Set %d is unable to synch after one hour.\n",ct);
      else{
        int hh,mm,sec;
        mm = res / 60;
        sec = res  - (mm*60);

        printf("Set %d synchs again at %d minute(s) and %d second(s) after all turning green.\n",ct,mm,sec);
      }
    }
    //scanf("%d %d",&light[1],&light[2]);

}
