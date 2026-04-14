#include "PhanSo.h"

// Hàm khởi tạo có tham số mặc định
PhanSo::PhanSo(int t, int m){
    tuso = t;
    mauso = m;
}

// Hàm khởi tạo sao chép
PhanSo::PhanSo(const PhanSo &p){
    tuso = p.tuso;
    mauso = p.mauso;
}

// Hàm phá hủy
PhanSo::~PhanSo(){   
}

// Hàm lấy tử số
int PhanSo::LayTu(){
    return tuso;
}

// Hàm lấy mẫu số
int PhanSo::LayMau(){
    return mauso;
}

// Hàm gán tử số
void PhanSo::GanTu(int t){
    tuso = t;
}

// Hàm gán mẫu số
void PhanSo::GanMau(int m){
    mauso = m;
}

// Hàm rút gọn phân số
void Rutgon(int &x, int &y)
{
    int a = abs(x);
    int b = abs(y);
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    x /= a;
    y /= a;
    if(y < 0)
    {
        x = -x;
        y = -y;
    }
}
// Hàm nhập phân số
void PhanSo::Nhap(){
    int x,y;
    cout << "Nhap tu so: ";
    cin >> x;
    do{
        cout << "Nhap mau so: ";
        cin >> y;
        if(y == 0){
            cout << "Mau so phai khac 0\n";
        }
    }while(y == 0);
    Rutgon(x,y);
    tuso = x;
    mauso = y;
}

// Hàm xuất phân số
void PhanSo::Xuat(){
    cout << tuso << "/" << mauso;
}

// Toán tử so sánh lớn hơn
bool PhanSo::operator>(PhanSo b){
    return tuso * b.mauso > b.tuso * mauso;
}

// Toán tử cộng phân số
PhanSo PhanSo::operator+(PhanSo b){
    PhanSo temp;
    temp.tuso = tuso * b.mauso + b.tuso * mauso;
    temp.mauso = mauso * b.mauso;
    Rutgon(temp.tuso, temp.mauso);
    return temp;
}

// Toán tử trừ phân số
PhanSo PhanSo::operator-(PhanSo b){
    PhanSo temp;
    temp.tuso = tuso * b.mauso - b.tuso * mauso;
    temp.mauso = mauso * b.mauso;
    Rutgon(temp.tuso, temp.mauso);
    return temp;
}
