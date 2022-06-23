#include "Stack.h"

/*=======================================================
Fucntion Template init Stack
decription: init memory data and number member
=========================================================*/
template<typename T, int N>
Stack<T,N>::Stack()
{
	Data = new T[N];
	count = 0;
}
/*========================================================
Fucntion Template dicontructor
decription: delete memory init
=========================================================*/
template<typename T, int N>
Stack<T,N>::~Stack()
{
	delete [] Data;
}
/*========================================================
Fucntion Template Push
decription: Add one member for array
=========================================================*/
template<typename T, int N>
void Stack<T,N>::Push(T data)
{
	if (count < N)
	{
		Data[count++] = data;
	}
	else
	{
		cout<<"\n stack Overflow!!!"<<endl;
	}
}
/*========================================================
Fucntion Template Pop
decription: Add one member for array
=========================================================*/
template<typename T, int N>
T Stack<T,N>::Pop()
{
	if (count > 0)
	{
		return Data[--count];
	}
	else
	{
		cout<<"\n stack is Empty"<<endl;
	}
}
int main()
{	
	Stack<int,5> stack;
	for(int i=0;i<5;i++)
	{
		stack.Push(i);
	}
	cout<<"Stack affter pop:"<<"  ";
	for(int i=0;i<5;i++)
	{
		cout<<stack.Pop()<<" ";
	}
	return 0;
}
