#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
using namespace std;

llu ct=0,cases,n;
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
    while(scanf("%llu",&n)!=EOF){
        if(n == 0)break;
        llu start = (10*n)/9;
        llu A[10005],k=1,check = start,i;
        A[0] = start;
        for(i=1;i<=20;i++){
            check++;
            if(check - (check/10) == n){
                A[k] = check;
                k++;
            }
        }
        check = start;
        for(i=1;i<=20;i++){
            check--;
            if(check - (check/10) == n){
                A[k] = check;
                k++;
            }
        }
        sort(A,A+k);
        for(i=0;i<k;i++){
            if(i == 0)printf("%llu",A[i]);
            else{
                printf(" %llu",A[i]);
            }
        }
        printf("\n");
    }

}
