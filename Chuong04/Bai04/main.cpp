#include <iostream>
#include "DaThuc.h"
using namespace std;

int main()
{
    DaThuc a, b, c;
    cout<<"Nhap vao da thuc thu nhat:\n";
    a.Nhap();
    cout<<"Da thuc thu nhat: ";
    a.Xuat();
    cout<<"Nhap vao da thuc thu hai:\n";
    b.Nhap();
    cout<<"Da thuc thu hai: ";
    b.Xuat();
    c = a.Tong(b);
    cout<<"Tong hai da thuc: ";
    c.Xuat();
    c = a.Hieu(b);
    cout<<"Hieu hai da thuc: ";
    c.Xuat();
    return 0;
}