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
char s[20005];
char ch;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
        int i,j,k=0,two=1,ans=0;
        while(cin>>ch){
            memset(s,'0',sizeof s);
            ans = 0;
            k = 0;
            two = 1;
            s[k] = ch ;
            k++;
            while(cin>>ch){
                if(ch == '#'){
                    break;
                }
                s[k] = ch;
                k++;
            }
            s[k] = NULL;
            //cout<<s<<endl;
            for(i=k-1;i>=0;i--){
                ans = (ans + ((s[i]-48)*two));
                ans =ans%131071;
                two = (two*2)%131071;
            }
            //cout<<ans<<endl;
            if(ans == 0){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }


}
