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
    cout << "Nhap he so: ";
    cin >> heso;
    cout << "Nhap so mu: ";
    cin >> somu;
}

// Hàm thay đổi
void DonThuc::ThayDoi()
{
    cout << "Cap nhat he so: ";
    cin >> heso;
    cout << "Cap nhat so mu: ";
    cin >> somu;
}

// Hàm xuất
void DonThuc::Xuat()
{
    cout<<heso<<"x^"<<somu<<"\n";
}

// Hàm tính giá trị đơn thức với x
float DonThuc::Tinh(float x)
{
    return heso * pow(x, somu);
}

// Hàm tính đạo hàm
DonThuc DonThuc::DaoHam()
{
    DonThuc daoham;
    daoham.heso = heso * somu;
    daoham.somu = somu - 1;
    return daoham;
}

// Hàm tính tổng
DonThuc DonThuc::Tong(const DonThuc & after)
{
    DonThuc tong;
    tong.heso = heso + after.heso;
    tong.somu = somu;
    return tong;
}

// Hàm lấy giá trị số mũ
float DonThuc::GetSomu() const
{
    return somu;
}
