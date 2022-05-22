#include<iostream>
#include<string>
using namespace std;
class String
{
	public:
		char* str;
	public:
		/*~String()
		{
			delete[]str;
		}*/
		friend String operator + (const String, const String);
		friend ostream& operator << (ostream&, String&);
		friend istream& operator >> (istream&, String&);
};
