#include <iostream>
#include "arrPhanSo.h"
using namespace std;

// Hàm khởi tạo mặc định
arrPhanSo::arrPhanSo()
{
    n = 0;
    arr = NULL;
}

// Hàm phá hủy
arrPhanSo::~arrPhanSo()
{
    delete[] arr;
}

// Hàm nhập mảng phân số
void arrPhanSo::Nhap()
{
    cout<<"Nhap so luong phan so: ";
    cin>>n;
    arr = new PhanSo[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap phan so thu "<<i+1<<":\n";
        arr[i].Nhap();
        arr[i].RutGon();
    }
}

// Hàm xuất mảng phân số
void arrPhanSo::Xuat()
{
    for (int i = 0; i < n; i++)
        arr[i].Xuat();
    cout<<"\n";
}

// Hàm tạo mảng phân số ngẫu nhiên
void arrPhanSo::TaoNgauNhien()
{
    cout<<"Nhap so luong phan so tao ngau nhien: ";
    cin>>n;
    arr = new PhanSo[n];
    for (int i = 0; i < n; i++)
    {
        arr[i].TaoNgauNhien();
        arr[i].RutGon();
    }
}

// Hàm tìm phân số lớn nhất
PhanSo arrPhanSo::Max()
{
    PhanSo max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i].SoSanh(max) == 1)
            max = arr[i];
    return max;
}

// Hàm đếm số phân số có tử số là số nguyên tố
int arrPhanSo::CountPrime()
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i].Check())
            count++;
    return count;
}

// Hàm sắp xếp mảng phân số
void arrPhanSo::Sort()
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i].SoSanh(arr[j]) == 1)
            {
                PhanSo temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}