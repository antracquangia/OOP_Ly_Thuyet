#include "DSPhanSo.h"
int main()
{
    DSPhanSo ds;
    ds.Nhap();
    cout<<"Phan so lon nhat la: ";
    ds.Max().Xuat();
    cout<<"\nTong cac phan so la: ";
    ds.Tong().Xuat();
    return 0;
}

