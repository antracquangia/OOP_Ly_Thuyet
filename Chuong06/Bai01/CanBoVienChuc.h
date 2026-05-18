#ifndef CANBOVIENCHUC_H
#define CANBOVIENCHUC_H
#include "Header.h"
class CanBoVienChuc
{
	protected:
		string MaCanBo;
		string HoTen;
		string GioiTinh;
	public:
		CanBoVienChuc();
		CanBoVienChuc(string Ma, string ht, string gt);
		~CanBoVienChuc();
		void Nhap();
		void Xuat();
};
#endif

