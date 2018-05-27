#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

int i,cases,n,b,j,total;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
     scanf("%d",&cases);
        getchar();
        getchar();
    while(cases--){
        map<string,int>m;
        vector<string>tree;
        char A[40];
         total=0;
        while(gets(A) && A[0]){

            string in=A;
            //cout << in << endl;
            if(m[in]==0){
                m[in]=1;
                tree.push_back(in);
            }
            else{
                m[in]++;
            }
            //cout << in << "ase" << m[in] << "ta" << endl;
            total++;
        }
        //cout << tree.size() << endl;
        sort(tree.begin(),tree.end());
        double res;
        for(i=0;i<tree.size();i++){
            //cout<< m[tree[i]] <<    total << endl;
            res=(100.00*(m[tree[i]]))/total;
            //printf("resss %lf\n",res);
            cout<<tree[i]<<" ";
            printf("%.4lf\n",res);
        }
        if(cases){
            printf("\n");
            //getchar();
        }
    }
}
