//including library
#include <iostream>
using namespace std;
//including main function
int main()
{
    char arr[11];
	 char* charptr;
    cout<<"Input 10 chars of string"<<endl;
    cin>>arr;
    charptr=&arr[0];
    for(int i=10;i>=0;i--)
   	{
    	for(int j=i;j<=10;j++)
    		{
            	cout<<*(charptr+j);
    		}
        		cout<<endl;
    	}
//end
return 0;
}
