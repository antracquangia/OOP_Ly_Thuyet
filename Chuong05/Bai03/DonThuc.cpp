#include <cmath>
#include "DonThuc.h"

// Hàm khởi tạo mặc định
DonThuc::DonThuc()
{
    Heso = 0;
    Somu = 0;
}

// Hàm phá hủy
DonThuc::~DonThuc()
{
}

// Toán tử nhập đơn thức
istream &operator>>(istream& is, DonThuc &dt)
{
    is>>dt.Heso;
    return is;
}

// Toán tử xuất đơn thức
ostream &operator<<(ostream& os, DonThuc dt)
{
    if (dt.Somu == 0) os<<abs(dt.Heso);
    else if (abs(dt.Heso) == 1) os<<"x^"<<dt.Somu;
    else os <<abs(dt.Heso) <<"x^"<<dt.Somu;
    return os;
}

// Hàm gán số mũ
void DonThuc::SetSomu(int sm)
{
    Somu = sm;
}

// Hàm gán hệ số
void DonThuc::SetHeso(int hs)
{
    Heso = hs;
}

//Hàm tính giá trị đơn thức
int DonThuc::TinhX(int x)
{
    return Heso * pow(x, Somu);
}

// Hàm lấy hệ số
int DonThuc::GetHeso() const
{
    return Heso;
}

// Toán tử cộng hai đơn thức
DonThuc DonThuc::operator+(const DonThuc& dt)
{
    DonThuc tong;
    tong.Heso = Heso + dt.Heso;
    tong.Somu = Somu;
    return tong;
}

// Toán tử trừ hai đơn thức
DonThuc DonThuc::operator-(const DonThuc& dt)
{
    DonThuc hieu;
    hieu.Heso = Heso - dt.Heso;
    hieu.Somu = Somu;
    return hieu;
}