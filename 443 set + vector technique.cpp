#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases,n;
set<long long>A;
set<long long> :: iterator it;

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

void func(){
        A.insert(1);
        it = A.begin();
        int i =1 ;
        //printf("dhukse\n");
        while(A.size()<=8000){
            A.insert(*it * 2);
            A.insert(*it * 3);
            A.insert(*it * 5);
            A.insert(*it * 7);
            it++;
           // printf("%d\n",i);
            i++;
        }
       // for(it=A.begin(); it!=A.end(); it++){
       //     cout<<*it<<endl;
       // }

}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    func();
    while(scanf("%d",&n)!=EOF){
        if(n==0)break;
        vector<long long>V(A.begin(),A.end());

        if(n%10 == 1 && (n%100)/10 !=1)cout<<"The "<<n<<"st humble number is "<<V[n-1]<<"."<<endl;
        else if(n%10 == 2 && (n%100)/10 !=1)cout<<"The "<<n<<"nd humble number is "<<V[n-1]<<"."<<endl;
        else if(n%10 == 3 && (n%100)/10 !=1)cout<<"The "<<n<<"rd humble number is "<<V[n-1]<<"."<<endl;
        else{
            cout<<"The "<<n<<"th humble number is "<<V[n-1]<<"."<<endl;
        }
    }
}
