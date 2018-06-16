//NOT MY CODE
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int convert(const string& s)
/*
* Precondition:string type object has been passed to function
* containing only numbers.
* Postcondition: A numeric version of the string has been returned, and
* the original string parameters have been unchanged.
*/
{
	int n = s.length() - 1;

	// the string is empty, the value should be zero
	if(s.empty())
		return 0;
	if(s[0] == '-')
		return -convert(s.substr(1, n--) ) ;
		//recursive call - changes each subsequent numeric value to a negative number

	if ( s.length()  == 1)
	{
		if(isdigit(s[0]))
			return s[0]- '0'; // translate the character to its numeric value
		else
			cout<<"Invalid numeric character: "<<s<<endl;
			return 0;
	}
	 return convert(s.substr(s.length() - 1,1)) + convert(s.substr(0, n--) ) * 10 ;	 //recursive call
}
int main(){
 string cj;
 cin>>cj;
 cout<<convert(cj);
 return 0;
}
