#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
using namespace std;

int ct=0,cases,n;
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

string a[55];
bool compare(string a,string b){
    string t1 = a + b;
    string t2 = b + a;
    //cout<<a<<" "<<b<<endl;
    if(t2 < t1)return true;
    else return false;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>n){
        if(n == 0)break;
        int i,j,k;

        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,compare);
        for(i=0;i<n;i++){
            cout<<a[i];
        }
        cout<<endl;
    }


}
