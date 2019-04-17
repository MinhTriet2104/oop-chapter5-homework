#ifndef NhanVien_h
#define NhanVien_h

#pragma once
#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected:
	string sMaNV;
	string sTenNV;
	int iNamSinh;
public:
	NhanVien() {
		this->sMaNV = "";
		this->sTenNV = "";
		this->iNamSinh = 0;
	}

	NhanVien(string sMaNV, string sTenNV, int iNamSinh) {
		this->sMaNV = sMaNV;
		this->sTenNV = sTenNV;
		this->iNamSinh = iNamSinh;
	}

	string getMaNV();
	string getTenNV();
	int getNamSinh();
	void setMaNV(string sMaNV);
	void setTenNV(string sTenNV);
	void setNamSinh(int iNamSinh);
	
	virtual int luong() = 0;
	virtual void nhap() = 0;
	virtual void xuat() = 0;

	virtual ~NhanVien() {};
};

#endif // !NhanVien_h

