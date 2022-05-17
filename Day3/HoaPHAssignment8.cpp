#include<iostream>
#include <cstring>
using namespace std;
/**************************************************
function findsubstr
In :const char* str
In:char* sub
Returns the position where the first string sub appears after if sub does not appear in str returns 1
***************************************************/
int findsubstr(const char* str, char* sub)
{
	for(int i=0;i<strlen(str);i++)
	{
		for(int j=0;j<strlen(sub);j++)
		{
			if(str[i]==sub[j])
			{
				return i;
			}
		}
	}
	return -1;
}
int main()
{
	const char* str="Hoadeptraisaoadeptraithe";
	char sub[100];
	cin>>sub;
	std::cout<<findsubstr(str,sub);
	return 0;
}
