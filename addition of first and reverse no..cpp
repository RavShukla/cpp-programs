#include <iostream>
using namespace std;
int main() {
 //program for reverse no. and first no. addition
 int rvn=0 ;//initialisation
 int nv;
 cout <<"enter a no.";
 cin>>nv;//input 
 int n = nv;
 while(n!=0){ //looping
 int ld = n%10 ;
 rvn = rvn * 10;
 rvn = rvn +  ld ;
 n = n/10;
 }
 cout<<"the reverse no. is :" ;// output
 cout << rvn<<endl;
 cout << "sum of first and reverse no." ;
 cout << nv+rvn<<endl;
 }
