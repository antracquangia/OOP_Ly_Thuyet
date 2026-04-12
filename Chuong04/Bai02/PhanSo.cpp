#include <iostream>
#include <ctime>
#include <cmath>
#include "PhanSo.h"
using namespace std;

// Hàm khởi tạo mặc định
PhanSo::PhanSo()
{
    iTuSo = 0;
    iMauSo = 1;
}

// Hàm phá hủy
PhanSo::~PhanSo()
{
}

// Hàm nhập phân số
void PhanSo::Nhap()
{
    int x,y;
    cout<<"Nhap tu so: ";
    cin>>x;
    iTuSo = x;
    do
    {
        cout<<"Nhap mau so: ";
        cin>>y;
        if (y == 0)
            cout<<"Mau so phai khac 0\n";
    } while (y == 0);
    iMauSo = y;
}

// Hàm xuất phân số
void PhanSo::Xuat()
{
    if (iMauSo == 1) cout<<iTuSo<<" ";
    else cout<<iTuSo<<"/"<<iMauSo<<" ";
}

// Hàm rút gọn phân số
void PhanSo::RutGon()
{
    int a,b;
    a = abs(iTuSo);
    b = abs(iMauSo);
    while (b != 0)
    {
        a %= b;
        swap(a,b);
    }
    iTuSo /= a;
    iMauSo /= a;
    if (iMauSo < 0)
    {
        iTuSo = -iTuSo;
        iMauSo = -iMauSo;
    }
}

// Hàm tạo phân số ngẫu nhiên
void PhanSo::TaoNgauNhien()
{
    int x,y;
    x = rand() % 201 - 100;
    do
    {
        y = rand() % 201 - 100;
    } while (y == 0);
    iTuSo = x;
    iMauSo = y;
}
// Hàm so sánh phân số
int PhanSo::SoSanh(const PhanSo &b)
{
    if (iTuSo * b.iMauSo > b.iTuSo * iMauSo) return 1;
    if (iTuSo * b.iMauSo < b.iTuSo * iMauSo) return -1;
    return 0;
}

// Hàm kiểm tra tử số có phải số nguyên tố không
bool PhanSo::Check()
{
    if (iTuSo < 2)
        return false;
    for (int i = 2; i*i <= iTuSo; i++)
    {
        if (iTuSo % i == 0)
            return false;
    }
    return true;
}