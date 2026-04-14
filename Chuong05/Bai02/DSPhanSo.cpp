#include "DSPhanSo.h"

// Hàm khởi tạo mặc định
DSPhanSo::DSPhanSo()
{
    n = 0;
    p = NULL;
}

// Hàm phá hủy
DSPhanSo::~DSPhanSo()
{
    delete[] p;
}

// Hàm nhập vào danh sách phân số
void DSPhanSo::Nhap()
{
    do
    {
        cout<<"Nhap vao so luong phan so: ";
        cin>>n;
        if (n<=0)
        {
            cout<<"So luong phan so phai lon hon 0\n";
        }
    }while(n<=0);
    p = new PhanSo[n];
    for (int i =0; i< n; i++)
    {
        cout<<"Nhap vao phan so thu "<<i+1<<":\n";
        p[i].Nhap();
    }
}

// Hàm tìm phân số lớn nhất
PhanSo DSPhanSo::Max()
{
    PhanSo max = p[0];
    for (int i =1; i< n; i++)
    {
        if (p[i] > max)
        {
            max = p[i];
        }
    }
    return max;
}

// Hàm tính tổng các phân số
PhanSo DSPhanSo::Tong()
{
    PhanSo tong = p[0];
    for (int i =1; i< n; i++)
    {
        tong = tong + p[i];
    }
    return tong;
}
