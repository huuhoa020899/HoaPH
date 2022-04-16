#include<math.h>
#include<iostream>
using namespace std;
bool KiemTraNamNhuan(int nam)
{
    return ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))?true:false;
}
int checkDayInMonth(int nam,int thang)
{
    int NumberDayInMonth;
    switch(thang)
    {
        case 1: case 3: case 5: case 7:case 8: case 10: case 12:
            NumberDayInMonth=31;
            break;
        case 4: case 6: case 9 : case 11:
            NumberDayInMonth=30;
            break;
        case 2:
            if(KiemTraNamNhuan(nam)){
                NumberDayInMonth=29;
            }else
                NumberDayInMonth =28;
            break;
        default:
            break;
    }
    return NumberDayInMonth;
}
void NgayKeTiep(int nam,int thang, int ngay)
{
    ngay++;
    if(ngay>checkDayInMonth(nam,thang))
    {   
        ngay=1;
        thang++;
        if(thang>12)
        {
            thang=1;
            nam++;
        }
    }
    std::cout<<"Show Day:"<<ngay<<"/"<<thang<<"/"<<nam<<std::endl;
}
void NgayTruoc(int nam,int thang,int ngay)
{
    ngay--;
    if(ngay==0)
    {
        thang--;
        if(thang==0)
        {   
            thang=12;
            nam--;
        }
        ngay=checkDayInMonth(nam,thang);
    }
    std::cout<<"Show Day:"<<ngay<<"/"<<thang<<"/"<<nam<<std::endl;
}
int main() 
{
    int nam,thang,ngay;
    std::cout<<"\nEnter Day:\n";
    cin>>ngay;
    std::cout<<"\nEnter Month:\n";
    cin>>thang;
    std::cout<<"\nEnter Year:\n";
    cin>>nam; 
    int choose;
    do
    {
    	
    	std::cout<<"\n==============MENU=====================";
    	std::cout<<"\n1.Find the number of Month";
    	std::cout<<"\n2.Show next day (dd/mm/yyyy)";
    	std::cout<<"\n3.Show previous day (dd/mm/yyyy)";
    	std::cout<<"\nEnter choose:\n";
    	std::cin>>choose;
    	switch(choose)
        {
            case 1:
                std::cout<<"So Ngay"<<checkDayInMonth(nam,thang);
                break;
            case 2:
            	NgayKeTiep(nam,thang,ngay);
            	break;
            case 3:
            	NgayTruoc(nam,thang,ngay);
            	break;
            default:
                break;
        }
	}
    while(choose<=4);
    
   return 0;
}
