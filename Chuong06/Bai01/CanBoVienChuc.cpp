#include "CanBoVienChuc.h"
#include <iostream>
using namespace std;
// Phương thức thiết lập mặc định
CanBoVienChuc::CanBoVienChuc()
{
	MaCanBo = "";
	HoTen = "";
	GioiTinh = "";
}
// Phương thức thiết lập có tham số
CanBoVienChuc::CanBoVienChuc(string Ma, string ht, string gt): MaCanBo(Ma), HoTen(ht), GioiTinh(gt)
{
};
// Phương thức phá hủy
CanBoVienChuc::~CanBoVienChuc()
{
};
// Hàm nhập
void CanBoVienChuc::Nhap()
{
	cout << "Nhap ma can bo: ";
	getline(cin, MaCanBo);
	cout << "Nhap ho ten: ";
	getline(cin, HoTen);
	cout << "Nhap gioi tinh: ";
	getline(cin, GioiTinh);
}
// Hàm xuất
void CanBoVienChuc::Xuat()
{
	cout << "Ma can bo: " << MaCanBo << endl;
	cout << "Ho ten: " << HoTen << endl;
	cout << "Gioi tinh: " << GioiTinh << endl;
}