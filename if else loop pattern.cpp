
#include <iostream>
using namespace std;
int main() {
	// printing variable pattern
	//1
	//A B
	//1 2 3
	//A B C D
	//1 2 3 4 5
	 
 int m ;
 cout << "enter no. of rows";
 cin >> m;
 
 
 
 for(int i=1 ; i<=m; i++){
 	
 	for(int j=1 ; j<=i ; j++ ){
 		
 		if(i%2 != 0){
 			cout<<j<<" ";
		 }
		 
		 else {
		 	char ch = char(64+j);
		 	cout << ch<<"    ";
		 }
	 }
	 
	 cout<< endl ;
 }
 
 
}
