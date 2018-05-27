#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases,n,h;

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
    string a;
    while(cin>>a){
        if(a.size()==1 && a=="0")break;

        int i,j,k=2,res=0;
        //cout<<res<<endl;
        for(i=a.size()-1;i>=0;i--){
            res = res + ((a[i]-48)*(k-1));
            //cout<<res<<endl;
            k=k*2;
        }
        cout<<res<<endl;
    }

}
