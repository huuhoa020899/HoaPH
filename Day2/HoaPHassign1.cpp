#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
using namespace std;
int *get_even_num(int* arr, int*sz)
{
	
	int index=0;
	int size=*arr;
	std::cout<<size;
	int *ptr = new int [*sz];
	if(arr)
	{	
		for(int i=1;i<=size;i++)
		{
			if(*(arr+i)%2==0)
			{
			    *(ptr+index)=*(arr+i);
				 index++;	
			}
		}
		*sz=index;
	}
	return ptr ;
	delete []ptr;
}
int main()
{
	int arr[]= {10,1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size;
	int *a=get_even_num(arr,&size);
	std::cout<<"\nsize:"<<size<<"\n";
	std::cout<<"\nArray: ";
	for(int i =0;i<size;i++)
	{
		std::cout<<a[i]<<"   ";
	}
	return 0;
}

