//include library
#include <iostream>
using namespace std;
//including main function
int main(){
	int a,b;
	int *p;
	p=&a;
	*p=b;
	cout<<"a is "<<a<<endl;
	cout<<"b is "<<b<<endl;
	cout<<"*p is "<<*p<<endl;
	a=2;
	b=3;
	cout<<"a is "<<a<<endl;
	cout<<"b is "<<b<<endl;
	cout<<"*p is "<<*p<<endl;
	p=&b;
	cout<<"a is "<<a<<endl;
	cout<<"b is "<<b<<endl;
	cout<<"*p is "<<*p<<endl;
//end
return 0;
}
