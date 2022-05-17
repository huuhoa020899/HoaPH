
#include<iostream>
#include<cstring>
#include <cstdlib>
using namespace std;
/******************************************************
function importData:
Parameter
In:pArr Pointer is allocated in function importData
In:szRow:Row size of matrix
In:szCol: Column size of matrix
Return true: success,false: fail
*******************************************************/
bool importData(int**pArr,int szRow,int szCol)
{
    int indexRow,indexCol;
    /*pArr=new int*[szRow];
    for (indexRow = 0; indexRow< szRow; indexRow++){
        pArr[indexRow] = new int[szCol];
    }*/
    if(pArr)
    {
    	//memset(pArr,0x00,sizeof(pArr[0][0])*szRow*szCol);
		for(indexRow=0;indexRow<szRow;indexRow++)
		{
			for(int indexCol=0;indexCol<szCol;indexCol++)
			{
				cout<<"\nEnter Arr["<<indexRow<<"]"<<"["<<indexCol<<"]"<<"\n";
				cin>>pArr[indexRow][indexCol];
			}
		}
		return true;
	}
	return false;
}
/*********************************************************
function: printMatrix
Parameter 
In:pArr Pointer is allocated in function importData
In:szRow:Row size of matrix
In:szCol: Column size of matrix
**********************************************************/
void printMatrix(int **pArr,int szRow,int szCol)
{	
	int indexRow,indexCol;
	/*pArr=new int*[szRow];
    for (indexRow = 0; indexRow< szRow; indexRow++){
        pArr[indexRow] = new int[szCol];
    }*/
	cout<<"MaTrix A["<<szRow<<"]"<<"["<<szRow<<"]"<<"\n";
	for(indexRow=0;indexRow<szRow;indexRow++)
	{
		for(indexCol=0;indexCol<szCol;indexCol++)
		{
			cout<<pArr[indexRow][indexCol]<<"    ";
		}
		cout<<"\n";
	}
}
/*******************************************
function addMatrix
********************************************/
int ** addMatrix(int **pArr1,int **pArr2,int szRow,int szCol)
{
	int indexRow,indexCol;
	int **addArr;
	addArr=new int*[szRow];
    for (indexRow = 0; indexRow< szRow; indexRow++){
        addArr[indexRow] = new int[szCol];
    }
    if(addArr)
    {
	    for(indexRow=0;indexRow<szRow;indexRow++)
	    {
	    	for( indexCol=0;indexCol<szCol;indexCol++)
	    	{
	    		addArr[indexRow][indexCol]=pArr1[indexRow][indexCol]+pArr2[indexRow][indexCol];
			}
		}
		return addArr;
	}
	
}
/****************************************************
function:freeMem
Parameter 
In:pArr Pointer is allocated in function importData
In:szRow:Row size of matrix
In:szCol: Column size of matrix
****************************************************/
void freeMem(int **pArr,int szRow,int szCol)
{
	for(int i=0;i<szRow;i++)
	{
		delete[]pArr[i];
	}
	delete[]pArr;
}
int main()
{
	int **pArr,**pArr2,**AddArr;
	int szRow,szCol;
	cout<<"\nEnter Row: ";
	cin>>szRow;
	cout<<"\nEnter Colums: ";
	cin>>szCol;
	pArr=new int*[szRow];
    for (int indexRow = 0; indexRow< szRow; indexRow++)
	{
        pArr[indexRow] = new int[szCol];
    }
    pArr2=new int*[szRow];
    for (int indexRow = 0; indexRow< szRow; indexRow++)
	{
        pArr2[indexRow] = new int[szCol];
    }
	cout<<"\nImport matrix One:";
	importData(pArr,szRow,szCol);
	cout<<"\nMatrix One:";
	printMatrix(pArr,szRow,szCol);
	cout<<"\nImport matrix Two:";
	importData(pArr2,szRow,szCol);
	cout<<"\nMatrix Two:";
	printMatrix(pArr2,szRow,szCol);
	AddArr=(int**)addMatrix(pArr,pArr2,szRow,szCol);
	cout<<"\nMa tran tong:\n";
	printMatrix(AddArr,szRow,szCol);
	freeMem(pArr,szRow,szCol);
	freeMem(pArr2,szRow,szCol);
	freeMem(AddArr,szRow,szCol);
	return 0;
}
