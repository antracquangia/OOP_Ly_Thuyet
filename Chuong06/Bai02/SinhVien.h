#ifndef SINHVIEN_H
#define SINHVIEN_H	
#include "Header.h"
class SinhVien
{
	protected:
		string MaSV;
		string HoTen;
		string DiaChi;
		int TongTinChi;
		float DTB;
	public:
		SinhVien();
		SinhVien(string MSV, string HT, string DC, int TTC, float Diem);
		virtual ~SinhVien();
		void Nhap();
		void Xuat();
		virtual bool CheckTotNghiep() = 0;
};
#endif

