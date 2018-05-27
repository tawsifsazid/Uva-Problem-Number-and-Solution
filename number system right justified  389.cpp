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

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    char A[105];
    int base,tobase;
    while(scanf("%s %d %d",A,&base,&tobase)!=EOF){
        int len = strlen(A),i,j,k;
        int gun=1,ans1=0;

        for(i = len-1 ; i>=0 ;i--){
            if(A[i] >= 65 && A[i] <= 90)ans1 = ans1 + (gun*(A[i]-55));
            else{
                ans1 = ans1 + (gun*(A[i]-48));
            }
            gun = gun*base;
        }
        //cout<<ans1<<endl;
        if(tobase == 10){
            int tmp = ans1;
            j = 0;
            while(tmp!=0){
                tmp = tmp/10;
                j++;
            }
            if(j>7) cout<<setw(7)<<"ERROR"<<endl;
            else{
                 cout.width(7);
                cout.setf(ios :: right);
                cout<<ans1<<endl;
            }
        }
        else{
            int tmp = ans1,vag=tobase;
            char res[11];
            j = 0;
            while(tmp!=0){
                int rem = tmp % vag;
                if(rem > 9){
                    if(rem == 10)res[j] = 'A';
                    if(rem == 11)res[j] = 'B';
                    if(rem == 12)res[j] = 'C';
                    if(rem == 13)res[j] = 'D';
                    if(rem == 14)res[j] = 'E';
                    if(rem == 15)res[j] = 'F';
                }
                else{

                        res[j] = rem + 48;
                    //cout<<res[j]<<endl;
                }
               j++;
               tmp = tmp/vag;
            }
            if(j>7){
                cout<<setw(7)<<"ERROR"<<endl;
            }
            else if(ans1 != 0){
                   int space = 7 - j;
                   for(i=0;i<space;i++){
                        cout<<" ";
                   }
                   for(i = j-1;i>=0;i--){
                        cout<<res[i];
                   }
                   cout<<endl;
            }
            else printf("      0\n");
        }

    }


}
