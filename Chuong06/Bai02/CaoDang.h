#ifndef CAODANG_H
#define CAODANG_H
#include "SinhVien.h"
#include "Header.h"
class CaoDang : public SinhVien
{
	private:
		float DiemTotNghiep;
	public:
		CaoDang();
		CaoDang(string MSV, string HT, string DC, int TTC, float Diem, float DTN);
		~CaoDang();
		void Nhap();
		void Xuat();
		bool CheckTotNghiep();
};
#endif