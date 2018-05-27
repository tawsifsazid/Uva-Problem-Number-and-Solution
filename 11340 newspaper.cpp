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
    char A[10005];
    while(cases--){
        map<char,double>M;
        int i,j,k,a,b;
        cin>>a;
        char cc;
        while(a--){
            cin>>cc>>b;
            M[cc] = b;
        }
        cin>>a;
        getchar();
        //cout<<" asdasd "<<a<<endl;
        double res = 0;
        for(i=0;i<a;i++){
            gets(A);
            //cout<<i<<endl;
            int len = strlen(A);
            for(j=0;j<len;j++){
                if(M[A[j]] != 0 ){
                    res = res + M[A[j]];
                    //cout<<res<<endl;
                }
            }
        }
        //cout<<"asd"<<endl;

        printf("%.2lf$\n",res/100);
    }
}
