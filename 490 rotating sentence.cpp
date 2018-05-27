#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
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

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s[105];
    int i=0,large = -1,len;
    while(getline(cin,s[i])){
         //cout<<s[i]<<endl;
         if(s[i].size() == 0)break;
        len = s[i].size();
        if(large < len){
            large = len;
            //cout<<large<<endl;
        }
        i++;
    }
    for(int j=0;j<large;j++){
        for(int k=i-1;k>=0;k--){
            if(s[k].size() <= j)cout<<" ";
            else cout<<s[k][j];
        }
        cout<<endl;
    }

}
