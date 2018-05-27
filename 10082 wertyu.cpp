#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases,n,k,h;

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

string s;
    while(getline(cin,s)){
        for(int i=0;i<s.size();i++){
           if(s[i] == '=')cout<<"-";
           if(s[i] == '-')cout<<"0";
           if(s[i] == '0')cout<<"9";
           if(s[i] == '9')cout<<"8";
           if(s[i] == '8')cout<<"7";
           if(s[i] == '7')cout<<"6";
           if(s[i] == '6')cout<<"5";
           if(s[i] == '5')cout<<"4";
           if(s[i] == '4')cout<<"3";
           if(s[i] == '3')cout<<"2";
           if(s[i] == '2')cout<<"1";
           if(s[i] == '1')cout<<"`";
           if(s[i] == ']')cout<<"[";
           if(s[i] == '[')cout<<"P";
           if(s[i] == 'P')cout<<"O";
           if(s[i] == 'O')cout<<"I";
           if(s[i] == 'I')cout<<"U";
           if(s[i] == 'U')cout<<"Y";
           if(s[i] == 'Y')cout<<"T";
           if(s[i] == 'T')cout<<"R";
           if(s[i] == 'R')cout<<"E";
           if(s[i] == 'E')cout<<"W";
           if(s[i] == 'W')cout<<"Q";
            if(s[i] == '\\')cout<<"'";
            if(s[i] == 39)cout<<";";
            if(s[i] == ';')cout<<"L";
            if(s[i] == 'L')cout<<"K";
            if(s[i] == 'K')cout<<"J";
            if(s[i] == 'J')cout<<"H";
            if(s[i] == 'H')cout<<"G";
            if(s[i] == 'G')cout<<"F";
            if(s[i] == 'F')cout<<"D";
            if(s[i] == 'D')cout<<"S";
            if(s[i] == 'S')cout<<"A";
            if(s[i] == '/')cout<<".";
            if(s[i] == '.')cout<<",";
            if(s[i] == ',')cout<<"M";
            if(s[i] == 'M')cout<<"N";
            if(s[i] == 'N')cout<<"B";
            if(s[i] == 'B')cout<<"V";
            if(s[i] == 'V')cout<<"C";
            if(s[i] == 'C')cout<<"X";
            if(s[i] == 'X')cout<<"Z";
            if(s[i] == ' ')cout<<" ";
            if(s[i] == '\n')cout<<endl;
        }
        cout<<endl;
    }
}
