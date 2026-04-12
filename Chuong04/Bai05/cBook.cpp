#include <iostream>
#include <string>
#include "cBook.h"
using namespace std;

// Hàm khởi tạo mặc định
cBook::cBook()
{
    MaSach = "";
    TenSach = "";
    NamXuatBan = 0;
    TongSoTrang = 0;
}

// Hàm phá hủy
cBook::~cBook()
{
}

// Hàm nhập thông tin sách
void cBook::Nhap()
{
    cout << "Nhap vao ma sach: ";
    getline(cin, MaSach);
    cout << "Nhap vao ten sach: ";
    getline(cin, TenSach);
    cout << "Nhap vao nam xuat ban: ";
    cin >> NamXuatBan;
    cout << "Nhap vao tong so trang: ";
    cin >> TongSoTrang;
    cin.ignore();
}

// Hàm xuất thông tin sách
void cBook::Xuat()
{
    cout << "Ma Sach: " << MaSach << endl;
    cout << "Ten Sach: " << TenSach << endl;
    cout << "Nam Xuat Ban: " << NamXuatBan << endl;
    cout << "Tong So Trang: " << TongSoTrang << endl;
}

// Hàm lấy mã sách
string cBook::getMaSach() const
{
    return MaSach;
}

// Hàm lấy tên sách
string cBook::getTenSach() const
{
    return TenSach;
}

// Hàm lấy năm xuất bản
int cBook::getNamXuatBan() const
{
    return NamXuatBan;
}

// Hàm lấy tổng số trang
int cBook::getTongSoTrang() const
{
    return TongSoTrang;
}

// Hàm cập nhật mã sách
void cBook::setMaSach(string a)
{
    MaSach = a;
}

// Hàm cập nhật tên sách
void cBook::setTenSach(string a)
{
    TenSach = a;
}

// Hàm cập nhật năm xuất bản
void cBook::setNamXuatBan(int a)
{
    NamXuatBan = a;
}

// Hàm cập nhật tổng số trang
void cBook::setTongSoTrang(int a)
{
    TongSoTrang = a;
}