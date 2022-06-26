#include"CLine.h"
#include "CCircle.h"
#include "CRactangle.h"
#include "CSquare.h"
#include "Picture.h"
using namespace std;
#include<iostream>
int main() {
    
    HWND console_handle = GetConsoleWindow();
    HDC device_context = GetDC(console_handle);
    Picture p_Picture;
    p_Picture.Array[0] = new CLine(1, 255);
    p_Picture.Array[1] = new CCircle(255, 150);
    p_Picture.Array[2] = new CRactangle(255, 100, 20);
    p_Picture.Array[3] = new CSquare(100, 255);
    int choose;
    do
    {
        
        cout << "\nEnter Option:";
        cin >> choose;
        switch(choose)
        {
            case 0:
                cout << "\nDraw shape Line:\n";
                p_Picture.Array[0]->draw(300, 300, device_context);
                ReleaseDC(console_handle, device_context);
                getchar();
                break;
            case 1:
                cout<< "\nDraw shape Circle:\n";
                p_Picture.Array[1]->draw(5, 5, device_context);
                ReleaseDC(console_handle, device_context);
                getchar();
                break;
            case 2:
                cout << "\nDraw shape Ractangle:\n";
                p_Picture.Array[2]->draw(300, 300, device_context);
                ReleaseDC(console_handle, device_context);
                getchar();
                break;
            case 3:
                cout << "\nDraw shape Square:\n";
                p_Picture.Array[3]->draw(300, 300, device_context);
                ReleaseDC(console_handle, device_context);
                getchar();
                break;
            default:
                break;
        }
    } while (choose > 4 || choose < 0);
    //delete[]CLine;
    return 0;
}