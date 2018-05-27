#include<bits/stdc++.h>

using namespace std;

string a,ans,tmp;
char A[1000007];
int len,sub;
map<string,int>M;
map<string,int> :: iterator i;
int main(){
    while(scanf("%d %s",&sub,A)!=EOF){
        a = A;
        //M.clear();
        //cout<<a<<endl;
        len = strlen(A);
        for(int j = 0;j<len-sub+1;j++){
            tmp = a.substr(j,sub);
            //cout<<tmp<<endl;
            M[tmp]++;

        }
        //i = M.begin();
        //cout<<i->first<<endl;
        int maxx = 0;
        for(i=M.begin();i!=M.end();i++){
            if(i->second > maxx){
                maxx = i->second;
                ans = i->first;
            }
        }
        cout<<ans<<endl;
        M.clear();

    }
}
