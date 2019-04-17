#pragma once
#include "nhanvien.h"
class NhanVienHD :
	public NhanVien
{
private:
	int iTienCongGio;
	int iSoGio;
public:
	NhanVienHD() {
		this->iTienCongGio = 0;
		this->iSoGio = 0;
	}

	NhanVienHD(string sMaNV, string sTenNV, int iNamSinh, int iTienCongGio, int iSoGio) : 
	NhanVien(sMaNV, sTenNV, iNamSinh) {
		this->iTienCongGio = iTienCongGio;
		this->iSoGio = iSoGio;
	}

	int getTienCongGio();
	int getSoGio();
	void setTienCongGio(int iLuongCanBan);
	void setSoGio(int iHeSoLuong);

	int luong();
	void nhap();
	void xuat();

	virtual ~NhanVienHD() {};
};

