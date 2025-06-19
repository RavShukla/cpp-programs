#include <iostream>
using namespace std;
int main() {
 //program for reverse no. and first no. addition
 int rvn=0 ;
 int nv;
 cout <<"enter a no.";
 cin>>nv;
 int n = nv;
 while(n!=0){
 int ld = n%10 ;
 rvn = rvn * 10;
 rvn = rvn +  ld ;
 n = n/10;
 }
 cout<<"the reverse no. is :" ;
 cout << rvn<<endl;
 cout << "sum of first and reverse no." ;
 cout << nv+rvn<<endl;
 }
