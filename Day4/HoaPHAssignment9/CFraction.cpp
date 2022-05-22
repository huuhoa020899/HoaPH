#include "CFraction.h"
#include <assert.h>
/******************************************************
function:ImportFraction
In:C_Fraction import numerator and denominator
description:function support import data from keyboard
*******************************************************/
void CFraction::ImportFraction(CFraction &C_Fraction)
{
	cout<<"\nEnter numerator: ";
	cin>>C_Fraction.num;
	cout<<"\nEnter denominator: ";
	cin>>C_Fraction.dem;
}
/******************************************************
function:UCLN
In:two Prime
return greatest common divisor
description:function support greatest common divisor
*******************************************************/
int UCLN(int a, int b)
{
    int r = a % b;         
    while (r!=0) {
        a = b;  
        b = r;
        r = a % b; 
    }
    if(b<0)
    {
    	return b*(-1);
	}
    return b;
}
/******************************************************
function:ExportFraction
C_Fraction export numerator and denominator
description:function support out console screen.
*******************************************************/
void CFraction::ExportFraction(CFraction C_Fraction)
{
	cout<<"\nFractions after Overloading: "<<C_Fraction.num<<"/"<<C_Fraction.dem;
}
/******************************************************
function:operator overloading plus
IN:two  Fraction
return Fraction result plus two Fraction
description:function support plus two Fraction.
*******************************************************/
CFraction operator + (const CFraction&C_Fraction_1, const CFraction&C_Fraction_2)
{
	assert(C_Fraction_1.dem!=0);
	assert(C_Fraction_2.dem!=0);
	
	CFraction C_Fraction_sum;
	C_Fraction_sum.num= C_Fraction_1.num*C_Fraction_2.dem +C_Fraction_1.dem*C_Fraction_2.num;
	C_Fraction_sum.dem= C_Fraction_1.dem*C_Fraction_2.dem;
	int ucln=UCLN(C_Fraction_sum.num,C_Fraction_sum.dem);
	C_Fraction_sum.num=C_Fraction_sum.num/ucln;
	C_Fraction_sum.dem=C_Fraction_sum.dem/ucln;
	return C_Fraction_sum;
}
/******************************************************
function:operator overloading Subtraction
IN:two  Fraction
return Fraction result Subtraction two Fraction
description:function support Subtraction two Fraction.
*******************************************************/
CFraction operator-(const CFraction&C_Fraction_1, const CFraction&C_Fraction_2)
{
	assert(C_Fraction_1.dem!=0);
	assert(C_Fraction_2.dem!=0);
	CFraction C_Fraction_Sub;
	C_Fraction_Sub.num= C_Fraction_1.num*C_Fraction_2.dem -C_Fraction_1.dem*C_Fraction_2.num;
	//printf("C_Fraction_Sub %d",C_Fraction_Sub.num);
	C_Fraction_Sub.dem= C_Fraction_1.dem*C_Fraction_2.dem;
	int ucln=UCLN(C_Fraction_Sub.num,C_Fraction_Sub.dem);
	C_Fraction_Sub.num=C_Fraction_Sub.num/ucln;
	//printf("C_Fraction_Sub %d LINE[%d]",C_Fraction_Sub.num,__LINE__);
	C_Fraction_Sub.dem=C_Fraction_Sub.dem/ucln;
	//printf("C_Fraction_Sub %d LINE[%d]",C_Fraction_Sub.dem,__LINE__);
	return C_Fraction_Sub;
}
/******************************************************
function:operator overloading Multiplication
IN:two  Fraction
return Fraction result Multiplication two Fraction
description:function support Multiplication two Fraction.
*******************************************************/
CFraction operator *(const CFraction&C_Fraction_1, const CFraction&C_Fraction_2)
{
	assert(C_Fraction_1.dem!=0);
	assert(C_Fraction_2.dem!=0);
	CFraction C_Fraction_Mul;
	C_Fraction_Mul.num= C_Fraction_1.num*C_Fraction_2.num;
	C_Fraction_Mul.dem= C_Fraction_1.dem*C_Fraction_2.dem;
	int ucln=UCLN(C_Fraction_Mul.num,C_Fraction_Mul.dem);
	C_Fraction_Mul.num=C_Fraction_Mul.num/ucln;
	C_Fraction_Mul.dem=C_Fraction_Mul.dem/ucln;
	return C_Fraction_Mul;
}
/******************************************************
function:operator overloading Division
IN:two  Fraction
return Fraction result Division two Fraction
description:function support Division two Fraction.
*******************************************************/
CFraction operator /(const CFraction&C_Fraction_1, const CFraction&C_Fraction_2)
{
	assert(C_Fraction_1.dem!=0);
	assert(C_Fraction_2.dem!=0);
	CFraction C_Fraction_Div;
	C_Fraction_Div.num= C_Fraction_1.num*C_Fraction_2.dem;
	C_Fraction_Div.dem= C_Fraction_1.dem*C_Fraction_2.num;
	int ucln=UCLN(C_Fraction_Div.num,C_Fraction_Div.dem);
	C_Fraction_Div.num=C_Fraction_Div.num/ucln;
	C_Fraction_Div.dem=C_Fraction_Div.dem/ucln;
	return C_Fraction_Div;
}
int main()
{
	CFraction C_Fraction_1,C_Fraction_2,C_Fraction_sum,C_Fraction_Sub,C_Fraction_Mul,C_Fraction_Div;
	C_Fraction_1.ImportFraction(C_Fraction_1);
	C_Fraction_2.ImportFraction(C_Fraction_2);
	C_Fraction_sum=C_Fraction_1+C_Fraction_2;
	cout<<"\nSum two Fraction :";
	C_Fraction_sum.ExportFraction(C_Fraction_sum);
	cout<<"\nSub two Fraction :";
	C_Fraction_Sub=C_Fraction_1-C_Fraction_2;
	C_Fraction_Sub.ExportFraction(C_Fraction_Sub);
	cout<<"\nMul two Fraction :";
	C_Fraction_Mul=C_Fraction_1*C_Fraction_2;
	C_Fraction_Mul.ExportFraction(C_Fraction_Mul);
	cout<<"\nDiv two Fraction:";
	C_Fraction_Div=C_Fraction_1/C_Fraction_2;
	C_Fraction_Div.ExportFraction(C_Fraction_Div);
	return 0;
}
