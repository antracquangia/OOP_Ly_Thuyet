#include <iostream>
#include <ctime>
#include "cArray.h"
using namespace std;

// Hàm tạo
cArray::cArray()
{
    n = 0;
    p = NULL;
}

// Hàm hủy
cArray::~cArray()
{
    delete[] p;
}
// Hàm nhập vào số lượng phần tử và các phần tử
void cArray::Nhap()
{
    cout<<"Nhap vao so luong phan tu: ";
    cin>>n;
    p = new int [n];
    for (int i = 0; i<n; i++)
    {
        cout<<"Nhap vao phan tu thu "<<i+1<<": ";
        cin>>p[i];
    }
}

// Hàm xuất ra các phần tử
void cArray::Xuat()
{
    for (int i = 0; i<n; i++)
        cout<<p[i]<<(i == n-1 ?"\n":" ");
}

// Hàm nhập vào số lượng phần tử và tạo ngẫu nhiên các phần tử
void cArray::TaoNgauNhien()
{
    cout<<"Nhap vao so luong phan tu tao ngau nhien: ";
    cin>>n;
    srand(time(NULL));
    for (int i=0; i<n; i++)
        p[i] = rand()% 201 - 100;
}

// Hàm đếm số lần xuất hiện của x
int cArray::DemX(int x)
{
    int count = 0;
    for (int i =0; i<n;i++)
        if (p[i] == x)
            count++;
    return count;
}

// Hàm kiểm tra tính tăng dần của mảng
bool cArray::CheckTang()
{
    for (int i = 1; i < n ;i++)
        if (p[i] < p[i-1])
            return false;
    return true;
}

// Hàm tìm số nhỏ nhất
int cArray::Min()
{
    int min = p[0];
    for (int i =1; i<n;i++)
        if (min > p[i]) min = p[i];
    return min;
}

// Hàm sắp xếp Interchange Sort
void cArray::Sort()
{
    for (int i =0; i<n-1;i++)
        for (int j= i +1; j<n;j++)
            if (p[i] > p[j])
                swap(p[i],p[j]);
}