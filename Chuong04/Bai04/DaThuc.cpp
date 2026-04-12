#include <iostream>
#include "DaThuc.h"
using namespace std;

// Hàm khởi tạo mặc định
DaThuc::DaThuc()
{
    n = 0;
    p = NULL;
}

// Hàm phá hủy
DaThuc::~DaThuc()
{
    delete[] p;
}

// Hàm nhập đa thức, nhập lại bậc nếu bậc < 0
void DaThuc::Nhap()
{
    do
    {
        cout<<"Nhap vao bac cua da thuc: ";
        cin>>n;
        if (n < 0)
            cout<<"Bac cua da thuc phai la so nguyen duong\n";
    }
    while (n < 0);
    p = new DonThuc[n+1];
    for(int i = 0; i <= n; i++)
    {
        p[i].SetSomu(i);
        cout<<"Nhap vao he so don thuc x^"<<i<<": ";
        p[i].Nhap();
    }
}

// Hàm xuất đa thức
void DaThuc::Xuat()
{
    for (int i =n; i>= 0; i--){
        if (p[i].GetHeSo() > 0)
            break;
        else if (p[i].GetHeSo() <0)
        {
            cout<<"-";
            break;
        }
    }
    for(int i = n; i >= 0; i--)
        if (p[i].GetHeSo() != 0)
        {
            p[i].Xuat();
            for (int j = i - 1; j >=0; j--)
                if (p[j].GetHeSo() > 0)
                {
                    cout<<" + ";
                    break;
                }
                else if (p[j].GetHeSo() < 0)
                {
                    cout<<" - ";
                    break;
                }
        }
    cout<<endl;
}

// Hàm tính giá trị đa thức với x
float DaThuc::Tinh(float x)
{
    float tong = 0;
    for(int i = 0; i <= n; i++)
    {
        tong += p[i].Tinh(x);
    }
    return tong;
}

// Hàm cộng hai đa thức
DaThuc DaThuc::Tong(const DaThuc &after)
{
    DaThuc tong;
    if (n > after.n)
    {
        tong.n = n;
    }
    else
    {
        tong.n = after.n;
    }
    tong.p = new DonThuc[tong.n + 1];
    for (int i = 0; i <= tong.n; i++)
    {
        tong.p[i].SetSomu(i);
        if (i <= n && i <= after.n)
            tong.p[i].SetHeso(p[i].GetHeSo() + after.p[i].GetHeSo());
        else if (i <= n)
            tong.p[i].SetHeso(p[i].GetHeSo());
        else
            tong.p[i].SetHeso(after.p[i].GetHeSo());
    }
    return tong;
}

// Hàm trừ hai đa thức
DaThuc DaThuc::Hieu(const DaThuc &after)
{
    DaThuc hieu;
    if (n > after.n)
    {
        hieu.n = n;
    }
    else
    {
        hieu.n = after.n;
    }
    hieu.p = new DonThuc[hieu.n + 1];
    for (int i = 0; i <= hieu.n; i++)
    {
        hieu.p[i].SetSomu(i);
        if (i <= n && i <= after.n)
            hieu.p[i].SetHeso(p[i].GetHeSo() - after.p[i].GetHeSo());
        else if (i <= n)
            hieu.p[i].SetHeso(p[i].GetHeSo());
        else
            hieu.p[i].SetHeso(-after.p[i].GetHeSo());
    }
    return hieu;
}

// Hàm khởi tạo sao chép
DaThuc::DaThuc(const DaThuc &other)
{
    n = other.n;
    p = new DonThuc[n+1];
    for (int i = 0; i <= n; i++)
        p[i] = other.p[i];
}

// Hàm gán
DaThuc &DaThuc::operator=(const DaThuc &other)
{
    if (this != &other)
    {
        delete[] p;
        n = other.n;
        p = new DonThuc[n+1];
        for (int i = 0; i <= n; i++)
            p[i] = other.p[i];
    }
    return *this;
}

