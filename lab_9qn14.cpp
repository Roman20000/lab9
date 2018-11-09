//include library
#include <iostream>
using namespace std;
int main(){
	//declaring array
	char arr[7]={'D','E','B','E','S','H','\0'};//declaring name
	
	//using index method
	cout <<"I AM ";
	for(int n=0;n<7;n++)
			cout <<arr[n];
			cout<<endl;

	//using pointers method
	
	cout <<"I AM ";
	for(int n=0;n<6;n++) 
	cout<<*(arr+n);
	cout<<endl;
//end
return 0;
}
