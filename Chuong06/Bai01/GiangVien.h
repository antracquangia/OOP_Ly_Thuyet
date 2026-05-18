#ifndef GIANGVIEN_H
#define GIANGVIEN_H
#include "CanBoVienChuc.h"
#include "Header.h"
class GiangVien : public CanBoVienChuc
{
	private:
		int SoGioDay;
		int SoGioNghienCuu;
		static const int DonGia = 100000;
	public:
		GiangVien();
		GiangVien(string Ma, string ht, string gt, int GioDay, int GioNghienCuu);
		~GiangVien();
		void Nhap();
		void Xuat();
		int TinhLuong();
};
#endif

