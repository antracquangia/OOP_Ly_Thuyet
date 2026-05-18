#ifndef NHANVIENHANHCHINH_H
#define NHANVIENHANHCHINH_H
#include "CanBoVienChuc.h"
#include "Header.h"
class NhanVienHanhChinh : public CanBoVienChuc
{
	private:
		int SoNgayLamViec;
		int SoGioLamThem;
		static const int DonGiaNgay = 200000;
		static const int DonGiaGio = 100000;
	public:
		NhanVienHanhChinh();
		NhanVienHanhChinh(string Ma, string ht, string gt, int NgayLamViec, int GioLamThem);
		~NhanVienHanhChinh();
		void Nhap();
		void Xuat();
		int TinhLuong();
};
#endif // NHANVIENHANHCHINH_H

