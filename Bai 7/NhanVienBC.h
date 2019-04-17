#pragma once
#include "nhanvien.h"
class NhanVienBC :
	public NhanVien
{
private:
	int iLuongCanBan;
	int iHeSoLuong;
	int iPhuCap;
public:
	NhanVienBC() {
		this->iLuongCanBan = 0;
		this->iHeSoLuong = 0;
		this->iPhuCap = 0;
	}

	NhanVienBC(string sMaNV, string sTenNV, int iNamSinh, int iLuongCanBan, int iHeSoLuong, int iPhuCap) : 
	NhanVien(sMaNV, sTenNV, iNamSinh) {
		this->iLuongCanBan = iLuongCanBan;
		this->iHeSoLuong = iHeSoLuong;
		this->iPhuCap = iPhuCap;
	}

	int getLuongCanBan();
	int getHeSoLuong();
	int getPhuCap();
	void setLuongCanBan(int iLuongCanBan);
	void setHeSoLuong(int iHeSoLuong);
	void setPhuCap(int iPhuCap);

	int luong();
	void nhap();
	void xuat();

	virtual ~NhanVienBC() {};
};

