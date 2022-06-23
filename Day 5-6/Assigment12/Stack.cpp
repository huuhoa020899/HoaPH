#include "Stack.h"
template<typename T, int N>
Stack<T,N>::Stack()
{
	Data = new T[N];
	count = 0;
}

template<typename T, int N>
Stack<T,N>::~Stack()
{
	delete [] Data;
}
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
