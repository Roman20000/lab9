//include library
#include <iostream>
using namespace std;
//including main function
int main(){
	//declaring array
	int arr[10];
	cout <<"enter the numbers now"<<endl;
	for(int n=0;n<10;n++)
	cin >>arr[n];
	//using index method
	cout <<"the numbers you have entered are"<<endl;
	for(int n=0;n<10;n++)
			cout <<arr[n]<<endl;
	//using pointers method
	
	cout <<"the numbers you have entered are"<<endl;
	for(int n=0;n<10;n++) 
	cout<<*(arr+n)<<endl;
return 0;
}
