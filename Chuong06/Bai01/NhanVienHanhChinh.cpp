#include "NhanVienHanhChinh.h"
// Phương thức thiết lập mặc định
NhanVienHanhChinh::NhanVienHanhChinh()
{
	SoNgayLamViec = 0;
	SoGioLamThem = 0;
}
// Phương thức thiết lập có tham số
NhanVienHanhChinh::NhanVienHanhChinh(string Ma, string ht, string gt, int NgayLamViec, int GioLamThem): CanBoVienChuc(Ma, ht, gt), SoNgayLamViec(NgayLamViec), SoGioLamThem(GioLamThem)
{
};
// Phương thức phá hủy
NhanVienHanhChinh::~NhanVienHanhChinh()
{
};
// Hàm nhập
void NhanVienHanhChinh::Nhap()
{
	cout << "Nhap thong tin nhan vien hanh chinh:\n";
	CanBoVienChuc::Nhap();
	string a, b;
	while (1)
	{
		cout << "Nhap so ngay lam viec: ";
		getline(cin, a);
		if (CheckInteger(a))
			{
			SoNgayLamViec = stoi(a);
			break;
		}
		else
			cout << "So ngay lam viec phai la so nguyen duong!\n";		
	}
	while (1)
	{
		cout << "Nhap so gio lam them: ";
		getline(cin, b);
		if (CheckInteger(b))
		{
			SoGioLamThem = stoi(b);
			break;
		}
		else
			cout << "So gio lam them phai la so nguyen duong!\n";
	}
}
// Hàm xuất
void NhanVienHanhChinh::Xuat()
{
	cout << "Thong tin nhan vien hanh chinh:\n";
	CanBoVienChuc::Xuat();
	cout << "So ngay lam viec: " << SoNgayLamViec << endl;
	cout << "So gio lam them: " << SoGioLamThem << endl;
	cout << "Luong: " << TinhLuong() << endl;
}
// Hàm tính lương
int NhanVienHanhChinh::TinhLuong()
{
	return SoNgayLamViec * DonGiaNgay + SoGioLamThem * DonGiaGio;
}