#include "GiangVien.h"
// Phương thức thiết lập mặc định
GiangVien::GiangVien()
{
	SoGioDay = 0;
	SoGioNghienCuu = 0;
}
// Phương thức thiết lập có tham số
GiangVien::GiangVien(string Ma, string ht, string gt, int GioDay, int GioNghienCuu): CanBoVienChuc(Ma, ht, gt), SoGioDay(GioDay), SoGioNghienCuu(GioNghienCuu)
{
};
// Phương thức phá hủy
GiangVien::~GiangVien()
{
};
// Hàm nhập
void GiangVien::Nhap()
{
	cout << "Nhap thong tin giang vien:\n";
	CanBoVienChuc::Nhap();
	string a, b;
	while (1)
	{
		cout << "Nhap so gio day: ";
		getline(cin, a);
		if (CheckInteger(a))
			{
			SoGioDay = stoi(a);
			break;
		}
		else
			cout << "So gio day phai la so nguyen duong!\n";		
	}
	while (1)
	{
		cout << "Nhap so gio nghien cuu: ";
		getline(cin, b);
		if (CheckInteger(b))
		{
			SoGioNghienCuu = stoi(b);
			break;
		}
		else
			cout << "So gio nghien cuu phai la so nguyen duong!\n";
	}
}
// Hàm xuất
void GiangVien::Xuat()
{
	cout << "Thong tin giang vien:\n";
	CanBoVienChuc::Xuat();
	cout << "So gio day: " << SoGioDay << endl;
	cout << "So gio nghien cuu: " << SoGioNghienCuu << endl;
	cout << "Luong: " << TinhLuong() << endl;
}
// Hàm tính lương
int GiangVien::TinhLuong()
{
	return (SoGioDay + SoGioNghienCuu) * DonGia;
}