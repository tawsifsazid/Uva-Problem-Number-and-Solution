#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

int i,cases,n,b,j,m,res,g,len,x;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    map<int,int>m;
    vector<int>name;
    while(cin>>x){
        if(m[x]==0){
            m[x]=1;
            name.push_back(x);
        }
        else{
            m[x]++;
        }
    }
    for(i=0;i<name.size();i++){
        cout<<name[i]<<" "<<m[name[i]]<<endl;
    }
}
