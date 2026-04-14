#include <ctime>
#include "MaTran.h"

// Hàm khởi tạo ma trận
MaTran::MaTran(int x, int y)
{
    m = x;
    n = y;
    p = new int*[m];
    for (int i =0; i< n; i++)
        p[i] = new int [n];
}

// Hàm khởi tạo sao chép
MaTran::MaTran(const MaTran& mt)
{
    m = mt.m;
    n = mt.n;
    p = new int*[m];
    for (int i =0; i< m; i++)
        p[i] = new int [n];
    for (int i =0; i< m; i++)
        for (int j =0; j< n; j++)
            p[i][j] = mt.p[i][j];
}

// Hàm phá hủy
MaTran::~MaTran()
{
    for (int i=0; i<n; i++)
        delete []p[i];
    delete []p;
}

// Hàm nhập ma trận
void MaTran::Nhap()
{
    for (int i =0; i< m; i++)
        for (int j =0; j< n; j++)
            cin >> p[i][j];
}

// Hàm xuất ma trận
void MaTran::Xuat()
{
    for (int i =0; i< m; i++)
    {
        for (int j =0; j< n; j++)
            cout << p[i][j] << " ";
        cout << endl;
    }
}

// Hàm tạo ngẫu nhiên ma trận
void MaTran::TaoNgauNhien()
{
    srand(time(0));
    for (int i =0; i< m; i++)
        for (int j =0; j< n; j++)
            p[i][j] = rand() % 201 - 100;
}

// Hàm toán tử gán
MaTran MaTran::operator=(const MaTran& mt)
{
    if (this != &mt)
    {
        delete []p;
        m = mt.m;
        n = mt.n;
        p = new int*[m];
        for (int i =0; i< n; i++)
            p[i] = new int [n];
        for (int i =0; i< m; i++)
            for (int j =0; j< n; j++)
            p[i][j] = mt.p[i][j];
    }
    return *this;
}

// Hàm toán tử cộng
MaTran MaTran::operator+(const MaTran& mt)
{
    MaTran tong(m, n);
    for (int i =0; i< m; i++)
        for (int j =0; j< n; j++)
            tong.p[i][j] = p[i][j] + mt.p[i][j];
    return tong;
}

// Hàm toán tử trừ
MaTran MaTran::operator-(const MaTran& mt)
{
    MaTran hieu(m, n);
    for (int i =0; i< m; i++)
        for (int j =0; j< n; j++)
            hieu.p[i][j] = p[i][j] - mt.p[i][j];
    return hieu;
}