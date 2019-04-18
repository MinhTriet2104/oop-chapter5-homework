#ifndef NhanVien_h
#define NhanVien_h

#pragma once
#include "NgaySinh.h"
#include <string>

class NhanVien
{
protected:
	string sHoTen;
	NgaySinh xNgaySinh;
	string sDiaChi;
public:
	NhanVien() {
		this->sHoTen = "";
		this->sDiaChi = "";
	}

	NhanVien(string sHoTen, string sDiaChi, int iNgay, int iThang, int iNam) : xNgaySinh(iNgay, iThang, iNam) {
		this->sHoTen = sHoTen;
		this->sDiaChi = sDiaChi;
	}

	string getTen();
	string getDiaChi();
	void setTen(string sHoTen);
	void setDiaChi(string sDiaChi);
	void setNhanVien(string sHoTen, string sDiaChi);

	virtual void nhapNV() = 0;
	virtual void xuatNV() = 0;
	virtual int luong() = 0;

	virtual ~NhanVien() {};
};

#endif // !NhanVien_h

