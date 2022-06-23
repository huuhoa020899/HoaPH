#include<iostream>
using namespace std;
#define Size 100
template<typename T, int N=10>
class Stack{
	private:
		T *Data;
		int count;
	public:
		Stack();
		~Stack();
		void Push(T data);
		T Pop();

};

