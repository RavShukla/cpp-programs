#include <iostream>
using namespace std;
int main() {
 //program for reverse no. 
 int rvn=0 ;
 int n;
 cout <<"enter a no.";
 cin>>n;
 while(n!=0){
 int ld = n%10 ;
 rvn = rvn * 10;
 rvn = rvn +  ld ;
 n = n/10;
 }
 cout << rvn;
 
 }
