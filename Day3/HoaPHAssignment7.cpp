#include<iostream>
#include <assert.h>
using namespace std;
float plus(float a,float b)
{
	return a+b;
}
float minus(float a,float b)
{
	return a-b;
}
float multiply(float a,float b)
{
	return a*b;
}
float divide(float a, float b)
{
	assert(b != 0); 
    return a/b;
}
void operation(float a,float b, float (*p2Func)(float,float))
{
	float result =p2Func(a,b);
	cout<<"Result:  "<<result<<"\n";
}
using namespace std;
int main()
{
	float a,b;
	cout<<"\nEnter Number a: ";
	cin>>a;
	cout<<"\nEnter Number b: ";
	cin>>b;
	cout<<"\nPlus two number:";
	operation(a,b,&::plus);
	cout<<"\nMinus two number:";
	operation(a,b,&::minus);
	cout<<"\nMultiply two number:";
	operation(a,b,&multiply);
	cout<<"\nDivide two number:";
	operation(a,b,&divide);
	return 0;
}
