#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
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
    char c;
    int k = 0,n = 0;
    double x[11],y[11],x1[11],y1[11];
    while(cin>>c){
        if( c == '*')break;

        cin>>x[n]>>y[n]>>x1[n]>>y1[n];
        n++;
    }
    double r1,r2;
    while(cin>>r1>>r2){
            //cout<<r1<<" "<<r2<<" "<<x[1]<<" "<<x1[1]<<" "<<y[1]<<" "<<y1[1]<<endl;
         k++;
        if(r1 ==  9999.9 && r2 == 9999.9 ){
            break;
        }
        int fl = 0,i;
        for(i= 0;i<n;i++){
            if(r1>x[i] && r1 < x1[i] && r2 < y[i] && r2 > y1[i] ){
                    fl = 1;
                    //cout<<"dhkse"<<endl;
                    cout<<"Point "<<k<<" is contained in figure "<<i+1<<endl;
                    //break;
            }
        }
        if(fl == 1){

        }
        else{
            cout<<"Point "<<k<<" is not contained in any figure"<<endl;
        }

    }

}
