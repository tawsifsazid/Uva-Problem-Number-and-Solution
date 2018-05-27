#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long a,i,cases,n,b,j,m,res,g;
string A,B;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>A){
        sort(A.begin(),A.end());
        //cout<< A << endl;
        B=A;
        if(B[0]=='0'){
                for(j=1;j<B.length();j++){
                    if(B[j]!='0'){
                       swap(B[0],B[j]);
                       break;
                    }
                }
        }
        reverse(A.begin(),A.end());
        //cout << A << endl;
        a=atoll(A.c_str());
        b=atoll(B.c_str());
        printf("%lld - %lld = %lld = 9 * %lld\n",a,b,a-b,(a-b)/9);
    }
}
