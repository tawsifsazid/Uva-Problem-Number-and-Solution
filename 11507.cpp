#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007

int ct=0,cases;

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
map <string, map<string,string> >M;




int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
M["+x"]["+y"] = "+y";
M["+x"]["-y"] = "-y";
M["+x"]["+z"] = "+z";
M["+x"]["-z"] = "-z";
M["-x"]["+y"] = "-y";
M["-x"]["-y"] = "+y";
M["-x"]["+z"] = "-z";
M["-x"]["-z"] = "+z";

M["+z"]["+y"] = "+z";
M["+z"]["-y"] = "+z";
M["+z"]["+z"] = "-x";
M["+z"]["-z"] = "+x";
M["-z"]["+y"] = "-z";
M["-z"]["-y"] = "-z";
M["-z"]["+z"] = "+x";
M["-z"]["-z"] = "-x";

M["+y"]["+y"] = "-x";
M["+y"]["-y"] = "+x";
M["+y"]["+z"] = "+y";
M["+y"]["-z"] = "+y";
M["-y"]["+y"] = "+x";
M["-y"]["-y"] = "-x";
M["-y"]["+z"] = "-y";
M["-y"]["-z"] = "-y";

int l;
 while(scanf("%d",&l)!=EOF){
    if(l == 0) break;
    int i,j,k;
    string ans,pre="+x",next;
    for(i=0;i<l-1;i++){
        cin >> next;
        //cout<< pre << " " << next << " = "<<M[pre][next]<<endl;
       if(next != "No") pre = M[pre][next];
    }
    cout<<pre<<endl;
 }


}
