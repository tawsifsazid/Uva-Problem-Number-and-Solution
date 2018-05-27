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
int gcd(int a,int b){
    if(b == 0 )return a;
    else {
        return gcd(b,a%b);
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

        int A[2005];
        while(scanf("%d",&A[0])){
            int i = 1;
            if(A[0] == 0)break;

            int num;
            while(scanf("%d",&num)){
                if(num == 0)break;
                A[i] = num;
                i++;
            }
            int n = i;
            int diff,g = 0;
            for(i=1;i<n;i++){
                diff = A[i] - A[i-1];
                g = gcd(diff,g);
            }
            if(g < 0) g= abs(g);

            printf("%d\n",g);

        }


}
