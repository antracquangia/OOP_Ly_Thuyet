#include <iostream>
#include "cArray.h"
using namespace std;
int main()
{
    cArray a;
    a.Nhap();
    cout<<"Day so la: ";
    a.Xuat();
    int x;
    cout<<"Nhap vao gia tri x: ";
    cin>>x;
    cout<<"So lan xuat hien cua x: "<< a.DemX(x)<<"\n";
    bool check = a.CheckTang();
    if (check) cout<<"Day so co tinh tang dan\n";
    else cout<<"Day so khong co tinh tang dan\n";
    cout<<"So nho nhat trong day la: "<<a.Min()<<"\n";
    a.Sort();
    cout<<"Day sau khi sap xep tang dan la: ";
    a.Xuat();
    a.TaoNgauNhien();
    cout<<"Day so la: ";
    a.Xuat();
    cout<<"Nhap vao gia tri x: ";
    cin>>x;
    cout<<"So lan xuat hien cua x: "<< a.DemX(x)<<"\n";
    check = a.CheckTang();
    if (check) cout<<"Day so co tinh tang dan\n";
    else cout<<"Day so khong co tinh tang dan\n";
    cout<<"So nho nhat trong day la: "<<a.Min()<<"\n";
    a.Sort();
    cout<<"Day sau khi sap xep tang dan la: ";
    a.Xuat();
    return 0;
}