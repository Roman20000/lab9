//include library
#include <iostream>
using namespace std;
//function
void revString(char* ptr)
{
	char *ptr1, *ptr2;
	ptr1 = ptr;
	ptr2 = ptr + mbrlen(ptr) - 1;

		while (ptr1 < ptr2) {
		// swap two chars in the array/cstring
		char temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		// advance ptr1 and rewind ptr2
		ptr1++;
		ptr2--;
		}
}

//including main function
int main()
{
  char s[10] = "abcde";
  revString(s);  // call the function
  
  cout << s << endl;
//end
  return 0;
}

