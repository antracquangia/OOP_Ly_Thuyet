#include <iostream>
#include "arrPhanSo.h"
using namespace std;
int main()
{
    arrPhanSo a;
    a.Nhap();
    cout<<"Mang phan so sau khi nhap: ";
    a.Xuat();
    PhanSo max = a.Max();
    cout<<"Phan so lon nhat: ";
    max.Xuat();
    cout<<endl;
    int count = a.CountPrime();
    cout<<"So phan so co tu so la so nguyen to: "<<count<<"\n";
    a.Sort();
    cout<<"Mang phan so sau khi sap xep: ";
    a.Xuat();
    a.TaoNgauNhien();
    cout<<"Mang phan so sau khi tao ngau nhien: ";
    a.Xuat();
    max = a.Max();
    cout<<"Phan so lon nhat: ";
    max.Xuat();
    cout<<endl;
    count = a.CountPrime();
    cout<<"So phan so co tu so la so nguyen to: "<<count<<"\n";
    a.Sort();
    cout<<"Mang phan so sau khi sap xep: ";
    a.Xuat();
    return 0;
}
