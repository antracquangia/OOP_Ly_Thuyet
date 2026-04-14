#include <iostream>
#include "Sophuc.h"
using namespace std;

// Hàm khởi tạo mặc định
Sophuc::Sophuc()
{
    Set(0, 0);
}
// Hàm khởi tạo có tham số
Sophuc::Sophuc(float a, float b)
{
    Set(a, b);
}

// Hàm khởi tạo số thực thành số phức
Sophuc::Sophuc(float a)
{
    Set(a, 0);
}

// Hàm phá hủy
Sophuc::~Sophuc()
{
}

// Hàm cập nhật giá trị
void Sophuc::Set(float a, float b)
{
    thuc = a;
    ao = b;
}

//Hàm nhập số phức
istream& operator>>(istream& is, Sophuc &a)
{
    cout << "Nhap phan thuc: ";
    is >> a.thuc;
    cout << "Nhap phan ao: ";
    is >> a.ao;
    return is;
}

//Hàm xuất số phức
ostream& operator<<(ostream& os, Sophuc a)
{
    os << "(" << a.thuc << ", " << a.ao << ")";
    return os;
}

//Hàm cộng hai số phức
Sophuc operator+(Sophuc a, Sophuc b)
{
    Sophuc c;
    c.thuc = a.thuc + b.thuc;
    c.ao = a.ao + b.ao;
    return c;
}

//Hàm trừ hai số phức
Sophuc operator-(Sophuc a, Sophuc b)
{
    Sophuc c;
    c.thuc = a.thuc - b.thuc;
    c.ao = a.ao - b.ao;
    return c;
}

//Hàm nhân hai số phức
Sophuc operator*(Sophuc a, Sophuc b)
{
    Sophuc c;
    c.thuc = a.thuc * b.thuc - a.ao * b.ao;
    c.ao = a.thuc * b.ao + a.ao * b.thuc;
    return c;
}

//Hàm chia hai số phức
Sophuc operator/(Sophuc a, Sophuc b)
{
    Sophuc c;
    if (b.thuc == 0 && b.ao == 0)
    {
        cout << "Khong the chia cho 0\n";
        return c;
    }
    c.thuc = (a.thuc * b.thuc + a.ao * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
    c.ao = (a.ao * b.thuc - a.thuc * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
    return c;
}

//Hàm so sánh bằng hai số phức
bool operator==(Sophuc a, Sophuc b)
{
    return (a.thuc == b.thuc) && (a.ao == b.ao);
}

//Hàm lấy phần thực
float Sophuc::GetThuc()
{
    return thuc;
}

//Hàm lấy phần ảo
float Sophuc::GetAo()
{
    return ao;
}