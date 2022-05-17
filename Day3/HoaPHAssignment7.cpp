#include<iostream>
using namespace std;
float Plus(float a,float b)
{
	return a+b;
}
float Minus(float a,float b)
{
	return a-b;
}
float Multiply(float a,float b)
{
	return a*b;
}
float Divide(float a, float b)
{
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
	operation(a,b,&Plus);
	cout<<"\nMinus two number:";
	operation(a,b,&Minus);
	cout<<"\nMultiply two number:";
	operation(a,b,&Multiply);
	cout<<"\nDivide two number:";
	operation(a,b,Divide);
	return 0;
}
