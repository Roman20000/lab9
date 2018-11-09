
//including the library
#include <iostream>
using namespace std;

//including main function
int main(){
	int a;
	//asking the user the question number for which answer is needed  
	cout<<"Input the question number(1/2/3/4) to get the answer"<<endl;
	cin>>a;
	if (a==1){
		cout<<"(1)*P3=S, (2)*P3=T, (3)P3=6940, (4)*P1=S, (5)P1=6940"<<endl;}
	else if(a==2){
		cout<<"D. *p=75"<<endl;}
	else if(a==3){
		cout<<"c is a char which cannot be converted to double and as *p points to a 		double value it shows error duing compilation 'cannot convert ‘char*’ to ‘double*’ in 		initialization'"<<endl;}
	else if(a==4){
		cout<<"the value of left hand side variable in sequential order is : 			'A','C','B','A','4435','B','C','4434','B','C','C','C'"<<endl;
	}
//end
return 0;
}
