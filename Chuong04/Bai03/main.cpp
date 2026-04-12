#include <iostream>
#include "DonThuc.h"
using namespace std;
int main()
{
    DonThuc a, b, c;
    cout<<"Nhap vao don thuc thu nhat:\n";
    a.Nhap();
    cout<<"Don thuc thu nhat: ";
    a.Xuat();
    /*DonThuc d = a.DaoHam();
    cout<<"Don thuc dao ham: ";
    d.Xuat();
    float x;
    cout<<"Nhap vao x: ";
    cin>>x;
    cout<<"Gia tri cua don thuc khi x = "<<x<<": ";
    cout<<a.Tinh(x)<<"\n";*/
    cout<<"Nhap vao don thuc thu hai:\n";
    b.Nhap();
    cout<<"Don thuc thu hai: ";
    b.Xuat();
    /*DonThuc e = b.DaoHam();
    cout<<"Don thuc dao ham: ";
    e.Xuat();
    cout<<"Nhap vao x: ";
    cin>>x;
    cout<<"Gia tri cua don thuc khi x = "<<x<<": ";
    cout<<b.Tinh(x)<<"\n";*/
    if(a.GetSomu() == b.GetSomu())
    {
        c = a.Tong(b);
        cout<<"Don thuc tong: ";
        c.Xuat();
    }
    else
    {
        cout<<"Khong the cong hai don thuc khac so mu\n";
    }
    return 0;
}

