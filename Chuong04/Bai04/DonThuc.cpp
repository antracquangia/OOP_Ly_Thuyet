#include <iostream>
#include <cmath>
#include "DonThuc.h"
using namespace std;

// Hàm khởi tạo mặc định
DonThuc::DonThuc()
{
    heso = 0;
    somu = 0;
}

//Hàm phá hủy
DonThuc::~DonThuc()
{
}

// Hàm nhập
void DonThuc::Nhap()
{
    cin >> heso;
}


// Hàm xuất
void DonThuc::Xuat()
{
    if(heso == 0)
    {
        return;
    }
    else if (heso == 1 && somu != 0)
        cout<<"";
    else if (heso == -1 && somu != 0)
        cout<<"";
    else
        cout<<abs(heso);
    if(somu == 0)
        cout<<"";
    else if(somu == 1)
        cout<<"x";
    else
        cout<<"x^"<<somu;
}

// Hàm tính giá trị đơn thức với x
float DonThuc::Tinh(float x)
{
    return heso * pow(x, somu);
}

// Hàm tính tổng
DonThuc DonThuc::Tong(const DonThuc & after)
{
    DonThuc tong;
    tong.heso = heso + after.heso;
    tong.somu = somu;
    return tong;
}

// Hàm lấy giá trị hệ số
float DonThuc::GetHeSo() const
{
    return heso;
}

// Hàm cập nhật giá trị hệ số
void DonThuc::SetHeso(float a)
{
    heso = a;
}

// Hàm cập nhật giá trị số mũ
void DonThuc::SetSomu(float a)
{
    somu = a;
}
