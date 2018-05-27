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
    string input1,input2,b;
    int ind;
    scanf("%d",&cases);
    getchar();
    while(cases--){
        ct++;
        getchar();
        vector<int>f;
        vector<string>s;
        vector<pair<int,string> >res;
        getline(cin,input1);
        stringstream Z1(input1);
        //cout<<"ha"<<endl;
        while(Z1>>ind){
             //cout<<"ha "<<ind<<endl;
            f.push_back(ind);
        }
        getline(cin,input2);
        stringstream Z2(input2);
        while(Z2>>b){
            //cout<<b<<endl;
            s.push_back(b);
        }
        int sz = min(f.size(),s.size());
        for(int i = 0;i<sz;i++){
            res.push_back(make_pair(f[i],s[i]));
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            cout<<res[i].second<<endl;
        }
        if(cases)printf("\n");
    }

}
