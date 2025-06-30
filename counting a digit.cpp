#include <iostream>
using namespace std;
int main() {
 int count = 0 ;
 int n ;
 cout << "enter a no. " ;
 cin >> n ;
 while(n>0){
 	n = n/10;
 	count ++ ;
 	}
 cout<<count<<endl;
}
