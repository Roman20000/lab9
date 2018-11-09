//including the library
#include <iostream>
using namespace std;

//including main function
int main(){
	char s[10]="abcde";
	char* cptr;
	//Required code
	for (cptr = s; *cptr !='\0'; cptr++);//cptr is taken to the end of strings
	cptr--;//reversing order of characters
	while (cptr >=s)//printing characters in reverse order
	cout<<*cptr--;
	cout<<endl;
//end
return 0;
}
