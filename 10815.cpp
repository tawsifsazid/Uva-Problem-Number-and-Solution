#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<set>
using namespace std;

int cases,n,b,i,res,g;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string a;
    set<string>m;
    set<string> :: iterator j;
    while(cin>>a){
    //cout<<a<<endl;
    string b;
        for(i=0;i<=a.size();i++){
            if(a[i]>=65 && a[i]<=90){
                a[i]=a[i]+32;
                b=b+a[i];
            }
            else if(a[i]>=97 && a[i]<=122){
                b=b+a[i];
                //cout<<"ekhon"<<"b "<<b<<endl;
            }
            else if(b!=""){
                m.insert(b);
                b="";
            }
        }
    }
    for(j=m.begin();j!=m.end();j++){
        cout<<*j<<endl;
    }
}
