#include <iostream>
#include "MaTran.h"
using namespace std;

int main()
{
    int m,n;
    cout<<"Nhap ma tran A:\n";
    cout<<"Nhap vao so dong: ";
    cin>>m;
    cout<<"Nhap vao so cot: ";
    cin>>n;
    MaTran A(m, n);
    cout<<"Nhap vao ma tran A: ";
    A.Nhap();
    cout<<"Ma tran A:\n";
    A.Xuat();
    cout<<"Tao ngau nhien ma tran B\n";
    MaTran B(m, n);
    B.TaoNgauNhien();
    cout<<"Ma tran B:\n";
    B.Xuat();
    MaTran C = A + B;
    MaTran D = A - B;
    cout<<"Ma tran A + B:\n";
    C.Xuat();
    cout<<"Ma tran A - B:\n";
    D.Xuat();
    return 0;
}