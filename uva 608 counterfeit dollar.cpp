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


int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>cases;
    while(cases--){
        string even,up,down,a,b,c,u,d;

        int i,j,k,halka = 0,ch = 0,first=0,second = 0;
        for(k=1;k<=3;k++){
            cin>>a>>b>>c;
            if(c == "even"){
                even = even + a + b;
                //cout<<even;
            }
            else if(c == "up"){
                if(up.size() == 0 && first == 0){
                    up = up + b;
                    first = 1;
                }
                else{
                    u = "";
                     //   cout<<up<<" milabo "<<b<<endl;
                    for(i=0;i<b.size();i++){
                        for(j=0;j<up.size();j++){
                            if(b[i] == up[j]){
                                u = u + b[i];
                            }
                        }
                    }
                    up = u;
                }
                if(down.size() == 0 && second == 0){
                    down = down + a;
                    second = 1;
                }
                else{
                    d = "";
                    //cout<<down<<" milabo "<<a<<endl;
                    for(i=0;i<a.size();i++){
                        for(j=0;j<down.size();j++){
                            if(a[i] == down[j]){
                                d = d + a[i];
                            }
                        }
                    }
                    down = d;
                }
                //cout<<down <<" hehe "<< up<<endl;
            }
            else{
                if(up.size() == 0 && first == 0){
                    up = up + a;
                    first = 1;
                }
                else{
                        u = "";
                       // cout<<up<<" milabo "<<a<<endl;
                    for(i=0;i<a.size();i++){
                        for(j=0;j<up.size();j++){
                            if(a[i] == up[j]){
                                u = u + a[i];
                            }
                        }
                    }
                    up = u;
                }
                if(down.size() == 0 && second == 0){
                    down = down + b;
                    second  = 1;
                }
                else{
                    d = "";
                    //cout<<down<<" milabo "<<b<<endl;
                    for(i=0;i<b.size();i++){
                        for(j=0;j<down.size();j++){
                            if(b[i] == down[j]){
                                d = d + b[i];
                            }
                        }
                    }
                    down = d;
                }
                //cout<<down <<" hehe "<< up<<endl;
            }

        }
        //cout<<even<<" "<<up<<" "<<down<<endl;
        //break;
        string diff1,diff2;
        int fl;
            for(i=0;i<up.size();i++){
                fl = 0;
                for(j=0;j<even.size();j++){
                    if(up[i] == even[j]){
                       fl = 1;
                    }
                }
                if(fl == 0){
                    diff1 = diff1 + up[i];
                }
            }
            for(i=0;i<down.size();i++){
                    fl = 0;
                for(j=0;j<even.size();j++){
                    if(down[i] == even[j]){
                        //diff2 = diff2 + down[i];
                       fl = 1;
                    }
                }
                 if(fl == 0){
                    diff2 = diff2 + down[i];
                }
            }
            string ans;
            //cout<<diff1<<" "<<diff2<<endl;
            if(diff1.size() == 0 && diff2.size() != 0){
                cout<<diff2[0]<<" "<<"is the counterfeit coin and it is heavy."<<endl;

            }
            else if(diff1.size() != 0 && diff2.size() == 0){
              cout<<diff1[0]<<" "<<"is the counterfeit coin and it is light."<<endl;
            }
            else{
                for(i=0;i<diff1.size();i++){
                    for(j=0;j<diff2.size();j++){
                        if(diff1[i] == diff2[j]){
                            ans = ans + diff1[i];
                            break;
                        }
                    }
                }
                for(i=0;i<up.size();i++){
                    if(ans[0] == up[i]){
                        halka = 1;
                    }
                }
                if(halka == 1)cout<<ans<<" "<<"is the counterfeit coin and it is light."<<endl;
                else{
                    cout<<ans<<" "<<"is the counterfeit coin and it is heavy."<<endl;
                }
            }

    }

}
