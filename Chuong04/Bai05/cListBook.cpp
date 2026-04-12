#include <iostream>
#include "cListBook.h"
using namespace std;

// Hàm khởi tạo mặc định
cListBook::cListBook()
{
    p = NULL;
    n = 0;
}

// Hàm khởi tạo sao chép
cListBook::cListBook(cListBook &a)
{
    n = a.n;
    p = new cBook[n];
    for (int i = 0; i < n; i++)
        p[i] = a.p[i];
}    

// Toán tử gán
cListBook& cListBook::operator=(cListBook &a)
{
    if (this != &a)
    {
        delete[] p;
        n = a.n;
        p = new cBook[n];
        for (int i = 0; i < n; i++)
            p[i] = a.p[i];
    }
    return *this;
}

// Hàm phá hủy
cListBook::~cListBook()
{
    if (p != NULL)
    {
        delete[] p;
    }
}

// Hàm nhập danh sách sách
void cListBook::Nhap()
{
    cout << "Nhap vao so luong sach: ";
    cin >> n;
    cin.ignore();
    p = new cBook[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap vao thong tin sach thu "<<i+1<<endl;
        p[i].Nhap();
    }
}

// Hàm xuất danh sách sách
void cListBook::Xuat()
{
    if (n == 0)
    {
        cout << "Danh sach rong" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"Thong tin sach thu "<<i+1<<endl;
        p[i].Xuat();
    }
}

// Hàm tìm sách xuất bản gần nhất
cBook cListBook::XuatBanGanNhat()
{
    if (n <= 0 || p == NULL) 
    {
        cout<<"Khong co sach xuat ban gan nhat\n";
        return cBook(); 
    }
    cBook max = p[0];
    for (int i = 1; i < n; i++)
    {
        if (p[i].getNamXuatBan() > max.getNamXuatBan())
        {
            max = p[i];
        }
    }
    return max;
}