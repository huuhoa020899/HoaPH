#include"String.h"
/******************************************************
function:operator overloading import
In:s_str_1 type class String
In:s_str_2 type class String
return result plus two Character string
description:function support plus two Character string
*******************************************************/
String operator + ( const String &s_str_1, const String &s_str_2)
{
	String s_str_pls;
	int index;
	int jndex;
	s_str_pls=s_str_1;
	//s_str_pls.str=s_str_1.str;
	for(index=0; s_str_pls.str[index]!='\0'; ++index); 
   	for(jndex=0; s_str_2.str[jndex]!='\0'; ++jndex, ++index)
   	{
      s_str_pls.str[index]=s_str_2.str[jndex];
   	}
   s_str_pls.str[index]='\0';
	
   return s_str_pls;
}
/******************************************************
function:operator overloading import
In:os type istream
In:s_str type class String
description:function support import Character string
*******************************************************/
istream& operator >> (istream&is, String &s_str)
{
	fflush(stdin);
	s_str.str = new char[100];
	cout<<"Enter character string:\n";
	is>>s_str.str;
	return is;
}
/******************************************************
function:operator overloading export
In:os type ostream
In:s_str type class String
description:function support display Character string
*******************************************************/
ostream&operator << (ostream&os, String&s_str)
{
	os<<"\nCharacter string after import: "<<s_str.str;
	return os;
}
int main()
{
	String str_1,str_2,s_str_pls;
	cin>>str_1;
	cin>>str_2;
	s_str_pls=str_1 + str_2;
	cout<<s_str_pls;
	
	return 0;
}
